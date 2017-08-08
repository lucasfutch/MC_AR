using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.EventSystems;

public class placeBox : MonoBehaviour {

	public Transform m_HitTransform;
	public GameObject randColorPrefab, woodPrefab, brickPrefab, torchPrefab, waterPrefab, stalactitePrefab, treePrefab, sandPrefab, explosion;
	public GameObject PickAxeSound, placeObjectSound;
	public float createHeight;

	private AudioSource audioPlace, audioDestroy;

	private GameObject boxGO;

	public Animator animator;

	private MaterialPropertyBlock props;

	public enum Selected {Pickaxe, Block, Null, Wood, Brick, Torch, RandColor, Water, Stalactite, Tree, Sand};
	public static Selected currentSelectedOG;
	public static Selected currentSelectionIsABlock;


	private Vector3 originalVec;

	public float timeToAnimate;
	private float timeElapsed;
	private bool animationCheck, animationStarted;

	private bool isCeiling;

	public enum MCFace
	{
		None,
		Up,
		Down,
		East,
		West,
		North,
		South
	}
		
	void Start () {
		props = new MaterialPropertyBlock ();
	}

	bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes, Transform desiredTransform) {
		List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
		if (hitResults.Count > 0) {
			foreach (var hitResult in hitResults) {
				Debug.Log ("Got hit!");
				desiredTransform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
				desiredTransform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
				Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
				return true;
			}
		}
		return false;
	}

	void CreateBox(Vector3 atPosition) {

		audioPlace = placeObjectSound.GetComponent<AudioSource>();
		audioPlace.Play ();

		if (currentSelectedOG == Selected.Wood) {
			Debug.Log ("Placing Wood Block");
			Instantiate (woodPrefab, atPosition, Quaternion.identity);
			//GameObject go = Instantiate(Resources.Load("Wood")) as GameObject;

		} else if (currentSelectedOG == Selected.Brick) {
			Debug.Log ("Placing Brick Block");
			Instantiate (brickPrefab, atPosition, Quaternion.identity);

		} else if (currentSelectedOG == Selected.Torch) {
			Debug.Log ("Placing Torch Block");
			Instantiate (torchPrefab, atPosition, Quaternion.identity);

		} else if (currentSelectedOG == Selected.RandColor) {
			Debug.Log ("Placing RandColor Block");
			boxGO = Instantiate (randColorPrefab, atPosition, Quaternion.identity);

			float r = Random.Range (0.0f, 1.0f);
			float g = Random.Range (0.0f, 1.0f);
			float b = Random.Range (0.0f, 1.0f);

			props.SetColor ("_InstanceColor", new Color (r, g, b));

			MeshRenderer renderer = boxGO.GetComponent<MeshRenderer> ();
			renderer.SetPropertyBlock (props);
		} else if (currentSelectedOG == Selected.Water) {
			Debug.Log ("Placing Water Block");
			Instantiate (waterPrefab, atPosition, Quaternion.identity);

		} else if (currentSelectedOG == Selected.Stalactite) {
			Debug.Log ("Placing Stalactite Block");
			Instantiate (stalactitePrefab, atPosition, Quaternion.identity);

		} else if (currentSelectedOG == Selected.Tree) {
			Debug.Log ("Placing Tree Block");
			Instantiate (treePrefab, atPosition, Quaternion.identity);

		} else if (currentSelectedOG == Selected.Sand) {
			Debug.Log ("Placing Sand Block");
			Instantiate (sandPrefab, atPosition, Quaternion.identity);

		} else {
			Debug.Log ("Did not place a box");		
		}
	}

	// Update is called once per frame
	void Update () {

		// Used for animation playing
		if (timeElapsed < timeToAnimate && animationStarted) {
			timeElapsed += Time.deltaTime;
		}
		else if (timeElapsed > timeToAnimate && animationStarted) {
			animationStarted = false;
			animator.ResetTrigger ("clickWindow");
			timeElapsed = 0.0f;
		}
			
		// Placing a block
		if ((Input.touchCount > 0) && (currentSelectionIsABlock == Selected.Block) && (m_HitTransform != null))
		{
			var touch = Input.GetTouch(0);
			if (touch.phase == TouchPhase.Began && !EventSystem.current.IsPointerOverGameObject (0))
			{
				Ray raycast = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit raycastHit;

				if (Physics.Raycast (raycast, out raycastHit)) {
					Debug.Log ("Detected a Box in plaxebox");
				}

					MCFace boxSideHit = GetHitFace (raycastHit);
					Vector3 boxSideHitVec = getFaceVec (boxSideHit);

				if (raycastHit.collider.CompareTag ("planePrefab")) {
					Debug.Log ("touched a plane");
				}
					
				// Check if pressing a previously placed block and adjust
				if (raycastHit.collider.CompareTag ("placedBox") && currentSelectedOG != Selected.Stalactite) {
					Debug.Log ("Placing Box on top of another box");
					float xPos = raycastHit.collider.gameObject.transform.position.x;
					float yPos = raycastHit.collider.gameObject.transform.position.y;
					float zPos = raycastHit.collider.gameObject.transform.position.z;

					originalVec = new Vector3 (xPos, yPos, zPos);

					Vector3 boxPosition = originalVec + boxSideHitVec;
					CreateBox (boxPosition);

				}
				// Did not touch a block but the plane 
				else {
					Debug.Log ("Did not touch a block but the plane");

					var screenPosition = Camera.main.ScreenToViewportPoint (touch.position);
					ARPoint point = new ARPoint {
						x = screenPosition.x,
						y = screenPosition.y
					};

					List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, 
						                                   ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent);
					if (hitResults.Count > 0) {
						foreach (var hitResult in hitResults) {
							Vector3 position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
							Debug.Log ("Placing a Box Normally at " + position);
							//Place a Stalactite
							if (currentSelectedOG == Selected.Stalactite) {
								if (raycastHit.collider.CompareTag ("planePrefab")) {
									float angle = Vector3.Angle(raycast.direction, raycastHit.collider.gameObject.transform.up);
//									Debug.Log (raycast.direction.y);
//									Debug.Log(raycastHit.collider.gameObject.transform.up);
//									Debug.Log (angle);
//
									if (raycast.direction.y > 0.1f) {
										Debug.Log ("Placing a Stalactite");
										CreateBox (new Vector3 (position.x, position.y - (createHeight + 0.45f), position.z));
									}
										
								}


								
							} else {
								Debug.Log("not placing a stalactite");

								CreateBox (new Vector3 (position.x, position.y + createHeight, position.z));
							}
							break;
						}
					}
				}
			}
		}


		// Removal of blocks
		if (Input.touchCount > 0 && currentSelectionIsABlock == Selected.Pickaxe)
		{
			var touch = Input.GetTouch(0);
			if (touch.phase == TouchPhase.Began && !EventSystem.current.IsPointerOverGameObject (0))
			{
				


				Ray raycast = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit raycastHit;

				Debug.Log ("Im playing with the pickaxe");
				// Touching a  box
				if (Physics.Raycast (raycast, out raycastHit)) {
					Debug.Log ("Detected a Box to delete");
					if (raycastHit.collider.CompareTag ("placedBox")) {
						
						float xPos = raycastHit.collider.gameObject.transform.position.x;
						float yPos = raycastHit.collider.gameObject.transform.position.y;
						float zPos = raycastHit.collider.gameObject.transform.position.z;
						originalVec = new Vector3 (xPos, yPos, zPos);

						animationStarted = true;
						animator.SetTrigger ("clickWindow");

						Instantiate (explosion, originalVec, Quaternion.identity);

						audioDestroy = PickAxeSound.GetComponent<AudioSource>();
						audioDestroy.Play ();

						Destroy (raycastHit.collider.gameObject);

					}
				}
			}

		}

	}

	// Check direction of touch
	public MCFace GetHitFace(RaycastHit hit)
	{
		Vector3 incomingVec = hit.normal - Vector3.up;

		if (incomingVec == new Vector3 (0, -1, -1)) {
			Debug.Log ("SOUTH");
			return MCFace.South;
		}

		if (incomingVec == new Vector3 (0, -1, 1)) {
			Debug.Log ("NORTH");
			return MCFace.North;
		}

		if (incomingVec == new Vector3 (0, 0, 0)) {
			Debug.Log ("UP");
			return MCFace.Up;
		}

		if (incomingVec == new Vector3 (0, -2, 0)) {// from 1,1,1
			Debug.Log ("DOWN");
			return MCFace.Down;
		}

		if (incomingVec == new Vector3 (-1, -1, 0)) {
			Debug.Log ("WEST");
			return MCFace.West;
		}

		if (incomingVec == new Vector3 (1, -1, 0)) {
			Debug.Log ("EAST");
			return MCFace.East;
		}

		return MCFace.None;
	}

	// Direction Vectors
	public Vector3 getFaceVec (MCFace side) 
	{
		switch (side) {
		case MCFace.Up:
			return new Vector3 (0, 0.1f, 0);
		case MCFace.Down:
			return new Vector3 (0, -0.1f, 0);
		case MCFace.East:
			return new Vector3 (0.1f, 0, 0);
		case MCFace.West:
			return new Vector3(-0.1f, 0, 0);
		case MCFace.North:
			return new Vector3(0, 0, 0.1f);
		case MCFace.South:
			return new Vector3(0, 0, -0.1f);
		}
		return new Vector3(0, 0, 0);
	}


}
