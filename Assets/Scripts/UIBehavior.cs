using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


namespace UnityEngine.XR.iOS
{

	public class UIBehavior : MonoBehaviour {

		public Transform Block, Pickaxe;
		public GameObject PickAxeParent;
		public destroyBlock destroyBlockScript;

		public enum Selected {Pickaxe, Block, Null};
		public static Selected currentSelected; 

		private Vector3 biggerButton = new Vector3 (0, 20f, 0);

		void Start () {
			PickAxeParent.SetActive (false);
			currentSelected = Selected.Null;
			placeBox.currentSelectedOG = placeBox.Selected.Block;
		}

		void ResetButtons(){

			foreach (Transform child in transform) {
				if (child.position.y > 75f) {
					child.position -= biggerButton;
				}
			}
		}
			
		public void PickaxeButtonSelected() {
			Debug.Log ("Changing to Select Pickaxe");

			ResetButtons ();

			if (currentSelected != Selected.Pickaxe) {
				Pickaxe.position += biggerButton;
			}

			currentSelected = Selected.Pickaxe;
			placeBox.currentSelectedOG = placeBox.Selected.Pickaxe;
			PickAxeParent.SetActive (true);

//			if (PickAxeParent.activeSelf) {
//				Debug.Log ("Pickaxe is active to destroy");
//				destroyBlockScript.RemoveBlock ();
//			} 
		}
		
		public void BlockButtonSelected(){
			Debug.Log ("Changing to Select Block");

			ResetButtons ();


			if (currentSelected != Selected.Block) {
				Block.position += biggerButton;
			}

			currentSelected = Selected.Block;
			placeBox.currentSelectedOG = placeBox.Selected.Block;
			PickAxeParent.SetActive (false);

		}
			
	}

}
