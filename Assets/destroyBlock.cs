using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroyBlock : MonoBehaviour {


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Ray raycast = Camera.main.ScreenPointToRay (Input.GetTouch(0).position);
		RaycastHit raycastHit;

		if (Physics.Raycast (raycast, out raycastHit)) {
			Debug.Log ("Detected a Box");
			if (raycastHit.collider.CompareTag ("placedBox")) {
				Debug.Log ("Placing Box on top of another box");

				Destroy (raycastHit.collider.gameObject);

			}
		}
	}

}
