using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


namespace UnityEngine.XR.iOS
{

	public class UIBehavior : MonoBehaviour {

		public Transform Block, Pickaxe;
		public GameObject PickAxeParent, Block1Parent, Block2Parent, Block3Parent, Block4Parent;
		public destroyBlock destroyBlockScript;
		public GameObject item1, item2, item3, item4;

		public enum Selected {Pickaxe, Block, Null, Block1, Block2, Block3, Block4};
		public static Selected currentSelected; 

		private Vector3 biggerButton = new Vector3 (0, 20f, 0);

		void Start () {
			PickAxeParent.SetActive (false);
			Block1Parent.SetActive (false);
			Block2Parent.SetActive (false);
			Block3Parent.SetActive (false);
			Block4Parent.SetActive (false);
			currentSelected = Selected.Null;
			placeBox.currentSelectedOG = placeBox.Selected.Block;
		}
		//0.4187499
		void ResetButtons(){

			foreach (Transform child in transform) {
				if (child.position.y > 80.0f) {
					child.position -= biggerButton;
				}
			}

			item1.SetActive (false);
			item2.SetActive (false);
			item3.SetActive (false);
			item4.SetActive (false);
		}
			
		public void PickaxeButtonSelected() {
			Debug.Log ("Changing to Select Pickaxe");

			ResetButtons ();

			if (currentSelected != Selected.Pickaxe) {
				Block1Parent.SetActive (false);
				Block2Parent.SetActive (false);
				Block3Parent.SetActive (false);
				Block4Parent.SetActive (false);

				Pickaxe.position += biggerButton;
				PickAxeParent.SetActive (true);
				currentSelected = Selected.Pickaxe;
				placeBox.currentSelectedOG = placeBox.Selected.Pickaxe;
				placeBox.currentSelectionIsABlock = placeBox.Selected.Pickaxe;

			} else {
				PickAxeParent.SetActive (false);
				currentSelected = Selected.Null;
				placeBox.currentSelectedOG = placeBox.Selected.Null;
			}
		}
		
		public void BlockButtonSelected(){
			Debug.Log ("Changing to Select Block");

			ResetButtons ();


			if (currentSelected != Selected.Block) {
				Block.position += biggerButton;
				currentSelected = Selected.Block;
				placeBox.currentSelectionIsABlock = placeBox.Selected.Block;
				PickAxeParent.SetActive (false);

				item1.SetActive (true);
				item2.SetActive (true);
				item3.SetActive (true);
				item4.SetActive (true);

				Block1Parent.SetActive (false);
				Block2Parent.SetActive (false);
				Block3Parent.SetActive (false);
				Block4Parent.SetActive (false);

			} else {
				currentSelected = Selected.Null;
				placeBox.currentSelectedOG = placeBox.Selected.Null;
			}
				
		}


		public void Block1ButtonSelected() { // Wood

			Block1Parent.SetActive (false);
			Block2Parent.SetActive (false);
			Block3Parent.SetActive (false);
			Block4Parent.SetActive (false);

			currentSelected = Selected.Block1;
			placeBox.currentSelectedOG = placeBox.Selected.Block1;
			Block1Parent.SetActive (true);
			Block1Parent.GetComponent<ParticleSystem> ().enableEmission = false;

			item1.SetActive (false);
			item2.SetActive (false);
			item3.SetActive (false);
			item4.SetActive (false);
	

		}

		public void Block2ButtonSelected() { // Brick

			Block1Parent.SetActive (false);
			Block2Parent.SetActive (false);
			Block3Parent.SetActive (false);
			Block4Parent.SetActive (false);

			currentSelected = Selected.Block2;
			placeBox.currentSelectedOG = placeBox.Selected.Block2;
			Block2Parent.SetActive (true);
			Block2Parent.GetComponent<ParticleSystem> ().enableEmission = false;

			item1.SetActive (false);
			item2.SetActive (false);
			item3.SetActive (false);
			item4.SetActive (false);

	
		}

		public void Block3ButtonSelected() { // Torch
			
			Block1Parent.SetActive (false);
			Block2Parent.SetActive (false);
			Block3Parent.SetActive (false);
			Block4Parent.SetActive (false);

			currentSelected = Selected.Block3;
			placeBox.currentSelectedOG = placeBox.Selected.Block3;
			Block3Parent.SetActive (true);
			Block3Parent.GetComponent<ParticleSystem> ().enableEmission = false;

			item1.SetActive (false);
			item2.SetActive (false);
			item3.SetActive (false);
			item4.SetActive (false);


		}

		public void Block4ButtonSelected() { // Colors
			
			Block1Parent.SetActive (false);
			Block2Parent.SetActive (false);
			Block3Parent.SetActive (false);
			Block4Parent.SetActive (false);

			currentSelected = Selected.Block4;
			placeBox.currentSelectedOG = placeBox.Selected.Block4;
			Block4Parent.SetActive (true);
			Block4Parent.GetComponent<ParticleSystem> ().enableEmission = false;

			item1.SetActive (false);
			item2.SetActive (false);
			item3.SetActive (false);
			item4.SetActive (false);
		}

			
	}

}
