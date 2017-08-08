using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class destroyBlock : MonoBehaviour {

	public void RemoveBlock () {

		if (Input.touchCount > 0)
		{
			var touch = Input.GetTouch(0);
			if (touch.phase == TouchPhase.Began && !EventSystem.current.IsPointerOverGameObject (0))
			{
				Ray raycast = Camera.main.ScreenPointToRay (touch.position);
				RaycastHit raycastHit;
						
				if (Physics.Raycast (raycast, out raycastHit)) {
					Debug.Log ("Detected a Box in destroyBlock script");
					if (raycastHit.collider.CompareTag ("placedBox")) {
						Debug.Log ("Destroying Box");
						Destroy (raycastHit.collider.gameObject);
					}
				}
			}

		}
	}

}
