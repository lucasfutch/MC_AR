using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.EventSystems;

public class placeBox : MonoBehaviour {

	public Transform m_HitTransform;
	public GameObject boxPrefab, block1Prefab, block2Prefab, block3Prefab;
	public float createHeight;

	private GameObject boxGO;

	public Animator animator;

	private MaterialPropertyBlock props;

	public enum Selected {Pickaxe, Block, Null, Block1, Block2, Block3, Block4};
	public static Selected currentSelectedOG;
	public static Selected currentSelectionIsABlock;


	private Vector3 originalVec;

	public float timeToAnimate;
	private float timeElapsed;
	private bool animationCheck, animationStarted;

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
		
	// Use this for initialization
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

		if (currentSelectedOG == Selected.Block1) {
			boxGO = Instantiate (block1Prefab, atPosition, Quaternion.identity);
			boxGO.GetComponent<ParticleSystem> ().enableEmission = false;

		} else if (currentSelectedOG == Selected.Block2) {
			boxGO = Instantiate (block2Prefab, atPosition, Quaternion.identity);
			boxGO.GetComponent<ParticleSystem> ().enableEmission = false;

		} else if (currentSelectedOG == Selected.Block3) {
			boxGO = Instantiate (block3Prefab, atPosition, Quaternion.identity);
			boxGO.GetComponent<ParticleSystem> ().enableEmission = false;

		} else if (currentSelectedOG == Selected.Block4) {
			boxGO = Instantiate (boxPrefab, atPosition, Quaternion.identity);
			boxGO.GetComponent<ParticleSystem> ().enableEmission = false;

			float r = Random.Range (0.0f, 1.0f);
			float g = Random.Range (0.0f, 1.0f);
			float b = Random.Range (0.0f, 1.0f);

			props.SetColor ("_InstanceColor", new Color (r, g, b));

			MeshRenderer renderer = boxGO.GetComponent<MeshRenderer> ();
			renderer.SetPropertyBlock (props);
		}
	}

	// Update is called once per frame
	void Update () {

		if (timeElapsed < timeToAnimate && animationStarted) {
			timeElapsed += Time.deltaTime;
		}
		else if (timeElapsed > timeToAnimate && animationStarted) {
			animationStarted = false;
			animator.ResetTrigger ("clickWindow");
			timeElapsed = 0.0f;
		}

			

		if ((Input.touchCount == 1) && (currentSelectionIsABlock == Selected.Block))
		{
			var touch = Input.GetTouch(0);
			if (touch.phase == TouchPhase.Began && !EventSystem.current.IsPointerOverGameObject (0))
			{
				////////////////////////
				Ray raycast = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit raycastHit;

				if (Physics.Raycast (raycast, out raycastHit)) {
					Debug.Log ("Detected a Box");
				}

					MCFace boxSideHit = GetHitFace (raycastHit);
					Vector3 boxSideHitVec = getFaceVec (boxSideHit);
					
				if (raycastHit.collider.CompareTag ("placedBox")) {
					Debug.Log ("Placing Box on top of another box");
					float xPos = raycastHit.collider.gameObject.transform.position.x;
					float yPos = raycastHit.collider.gameObject.transform.position.y;
					float zPos = raycastHit.collider.gameObject.transform.position.z;

					originalVec = new Vector3 (xPos, yPos, zPos);

					//Vector3 originalVec = new Vector3 (xPos, yPos + createHeight, zPos);
					Vector3 boxPosition = originalVec + boxSideHitVec;
					CreateBox (boxPosition);

				} else {
					/////////////////////////

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
							Debug.Log ("Placing a Box Normally");
							CreateBox (new Vector3 (position.x, position.y + createHeight, position.z));
							break;
						}
					}
				}//
			}
		}

		if (Input.touchCount > 0 && currentSelectionIsABlock == Selected.Pickaxe)
		{
			var touch = Input.GetTouch(0);
			if (touch.phase == TouchPhase.Began && !EventSystem.current.IsPointerOverGameObject (0))
			{
				


				Ray raycast = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit raycastHit;

				if (Physics.Raycast (raycast, out raycastHit)) {
					Debug.Log ("Detected a Box");
					if (raycastHit.collider.CompareTag ("placedBox")) {
						Debug.Log ("Destroying Box");
						animationStarted = true;
						animator.SetTrigger ("clickWindow");
						raycastHit.collider.gameObject.GetComponent<ParticleSystem> ().enableEmission = true;
						Destroy (raycastHit.collider.gameObject);

					}
				}
			}

		}

	}

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
