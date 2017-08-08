using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


namespace UnityEngine.XR.iOS
{

	public class UIBehavior1 : MonoBehaviour {

		public Transform Block, Pickaxe;
		public GameObject PickAxeParent;
		public GameObject item_wood, item_brick, item_torch, item_rand, item_water, item_stala, item_tree, item_sand;

		public enum Selected {Pickaxe, Block, Null, Wood, Brick, Torch, RandColor, Water, Stalactite, Tree, Sand};
		public static Selected currentSelected; 

		private Vector3 biggerButton = new Vector3 (0, 20f, 0);
		private bool blockButtonHasBeenMoved = false;
		private bool pickaxeButtonHasBeenMoved = false;

		void Start () {
			PickAxeParent.SetActive (false);
			currentSelected = Selected.Null;
			placeBox1.currentSelectedOG = placeBox1.Selected.Block;
			placeBox1.currentSelectionIsABlock = placeBox1.Selected.Block;

		}

		void ResetButtons(){

			if (blockButtonHasBeenMoved) {
				Block.position -= biggerButton;
				blockButtonHasBeenMoved = false;
			}
			
			if (pickaxeButtonHasBeenMoved) {
				Pickaxe.position -= biggerButton;
				pickaxeButtonHasBeenMoved = false;
			}

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);
		}
			
		public void PickaxeButtonSelected() {
			Debug.Log ("Changing to Select Pickaxe");

			ResetButtons ();

			if (currentSelected != Selected.Pickaxe) {

				Pickaxe.position += biggerButton;
				pickaxeButtonHasBeenMoved = true;

				PickAxeParent.SetActive (true);
				currentSelected = Selected.Pickaxe;
				placeBox1.currentSelectedOG = placeBox1.Selected.Pickaxe;
				placeBox1.currentSelectionIsABlock = placeBox1.Selected.Pickaxe;

			} else {
				PickAxeParent.SetActive (false);
				currentSelected = Selected.Null;
				placeBox1.currentSelectedOG = placeBox1.Selected.Null;
			}
		}
		
		public void BlockButtonSelected(){
			Debug.Log ("Changing to Select Block");

			ResetButtons ();

			if (currentSelected != Selected.Block) {
				Block.position += biggerButton;
				blockButtonHasBeenMoved = true;
				currentSelected = Selected.Block;
				placeBox1.currentSelectionIsABlock = placeBox1.Selected.Block;
				PickAxeParent.SetActive (false);

				item_wood.SetActive (true);
				item_brick.SetActive (true);
				item_torch.SetActive (true);
				item_rand.SetActive (true);
				item_water.SetActive (true);
				item_stala.SetActive (true);
				item_tree.SetActive (true);
				item_sand.SetActive (true);

			} else {
				currentSelected = Selected.Null;
				placeBox1.currentSelectedOG = placeBox1.Selected.Null;
			}
				
		}


		public void WoodButtonSelected() {
			currentSelected = Selected.Wood;
			placeBox1.currentSelectedOG = placeBox1.Selected.Wood;
	

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);
		}

		public void BrickButtonSelected() { 

			currentSelected = Selected.Brick;
			placeBox1.currentSelectedOG = placeBox1.Selected.Brick;

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);
		}

		public void TorchButtonSelected() { 

			currentSelected = Selected.Torch;
			placeBox1.currentSelectedOG = placeBox1.Selected.Torch;

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);


		}

		public void RandColorButtonSelected() { // Colors

			currentSelected = Selected.RandColor;
			placeBox1.currentSelectedOG = placeBox1.Selected.RandColor;;

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);
		}

		public void WaterButtonSelected() {

			currentSelected = Selected.Water;
			placeBox1.currentSelectedOG = placeBox1.Selected.Water;

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);
		}

		public void StalactiteButtonSelected() {

			currentSelected = Selected.Stalactite;
			placeBox1.currentSelectedOG = placeBox1.Selected.Stalactite;

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);
		}

		public void TreeButtonSelected() {
			currentSelected = Selected.Tree;
			placeBox1.currentSelectedOG = placeBox1.Selected.Tree;

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);
		}

		public void SandButtonSelected() {
			currentSelected = Selected.Sand;
			placeBox1.currentSelectedOG = placeBox1.Selected.Sand;

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);
		}

			
	}

}
