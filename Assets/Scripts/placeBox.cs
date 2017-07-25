using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;
using UnityEngine.EventSystems;

public class placeBox : MonoBehaviour {

	public Transform m_HitTransform;
	public GameObject boxPrefab;
	public float createHeight;

	private MaterialPropertyBlock props;
	private float totalHeight;

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
		GameObject boxGO = Instantiate (boxPrefab, atPosition, Quaternion.identity);

		float r = Random.Range(0.0f, 1.0f);
		float g = Random.Range(0.0f, 1.0f);
		float b = Random.Range(0.0f, 1.0f);

		props.SetColor("_InstanceColor", new Color(r, g, b));

		MeshRenderer renderer = boxGO.GetComponent<MeshRenderer>();
		renderer.SetPropertyBlock(props);
	}

	// Update is called once per frame
	void Update () {
		if (Input.touchCount > 0 )
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

				//Debug.Log ("Making a box");
				if (raycastHit.collider.CompareTag ("placedBox")) {
					Debug.Log ("Placing Box on top of another box");

					float xPos = raycastHit.collider.gameObject.transform.position.x;
					float yPos = raycastHit.collider.gameObject.transform.position.y;
					float zPos = raycastHit.collider.gameObject.transform.position.z;
					CreateBox (new Vector3 (xPos, yPos + createHeight*2, zPos));

				}
				/////////////////////////

				var screenPosition = Camera.main.ScreenToViewportPoint(touch.position);
				ARPoint point = new ARPoint {
					x = screenPosition.x,
					y = screenPosition.y
				};

				List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, 
					ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent);
				if (hitResults.Count > 0) {
					foreach (var hitResult in hitResults) {
						Vector3 position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);

//						Ray raycast = Camera.main.ScreenPointToRay (touch.position);
//						RaycastHit raycastHit;
//
//						if (Physics.Raycast (raycast, out raycastHit)) {
//							Debug.Log ("Detected a Box");
//						}
//
//						//Debug.Log ("Making a box");
//						if (raycastHit.collider.CompareTag ("placedBox")) {
//							Debug.Log ("Placing Box on top of another box");
//								
//							float xPos = raycastHit.collider.gameObject.transform.position.x;
//							float yPos = raycastHit.collider.gameObject.transform.position.y;
//							float zPos = raycastHit.collider.gameObject.transform.position.z;
//							CreateBox (new Vector3 (xPos, yPos + createHeight*2, zPos));
//
//						}
//						else {
							Debug.Log ("Placing a Box Normally");
							CreateBox (new Vector3 (position.x, position.y + createHeight, position.z));
						//}

						break;
					}
				}

			}
		}

	}

}
