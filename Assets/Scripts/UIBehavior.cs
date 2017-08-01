using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


namespace UnityEngine.XR.iOS
{

	public class UIBehavior : MonoBehaviour {

		public Transform Block, Pickaxe;
		public GameObject PickAxeParent, WoodParent, BrickParent, TorchParent, RandColorParent, WaterParent, StalactiteParent, TreeParent, SandParent;
		public destroyBlock destroyBlockScript;
		public GameObject item_wood, item_brick, item_torch, item_rand, item_water, item_stala, item_tree, item_sand;

		public enum Selected {Pickaxe, Block, Null, Wood, Brick, Torch, RandColor, Water, Stalactite, Tree, Sand};
		public static Selected currentSelected; 

		private Vector3 biggerButton = new Vector3 (0, 20f, 0);
		private bool blockButtonHasBeenMoved = false;
		private bool pickaxeButtonHasBeenMoved = false;

		void Start () {
			PickAxeParent.SetActive (false);
			WoodParent.SetActive (false);
			BrickParent.SetActive (false);
			TorchParent.SetActive (false);
			RandColorParent.SetActive (false);
			WaterParent.SetActive (false);
			StalactiteParent.SetActive (false);
			TreeParent.SetActive (false);
			SandParent.SetActive (false);

			currentSelected = Selected.Null;
			placeBox.currentSelectedOG = placeBox.Selected.Block;
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

			//pickaxeButtonHasBeenMoved = true;

			if (currentSelected != Selected.Pickaxe) {
				WoodParent.SetActive (false);
				BrickParent.SetActive (false);
				TorchParent.SetActive (false);
				RandColorParent.SetActive (false);
				WaterParent.SetActive (false);
				StalactiteParent.SetActive (false);
				TreeParent.SetActive (false);
				SandParent.SetActive (false);

				Pickaxe.position += biggerButton;
				pickaxeButtonHasBeenMoved = true;

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

			//blockButtonHasBeenMoved = true;

			if (currentSelected != Selected.Block) {
				Block.position += biggerButton;
				blockButtonHasBeenMoved = true;
				currentSelected = Selected.Block;
				placeBox.currentSelectionIsABlock = placeBox.Selected.Block;
				PickAxeParent.SetActive (false);

				item_wood.SetActive (true);
				item_brick.SetActive (true);
				item_torch.SetActive (true);
				item_rand.SetActive (true);
				item_water.SetActive (true);
				item_stala.SetActive (true);
				item_tree.SetActive (true);
				item_sand.SetActive (true);

				WoodParent.SetActive (false);
				BrickParent.SetActive (false);
				TorchParent.SetActive (false);
				RandColorParent.SetActive (false);
				WaterParent.SetActive (false);
				StalactiteParent.SetActive (false);
				TreeParent.SetActive (false);
				SandParent.SetActive (false);

			} else {
				currentSelected = Selected.Null;
				placeBox.currentSelectedOG = placeBox.Selected.Null;
			}
				
		}


		public void WoodButtonSelected() { // Wood

			WoodParent.SetActive (false);
			BrickParent.SetActive (false);
			TorchParent.SetActive (false);
			RandColorParent.SetActive (false);
			WaterParent.SetActive (false);
			StalactiteParent.SetActive (false);
			TreeParent.SetActive (false);
			SandParent.SetActive (false);

			currentSelected = Selected.Wood;
			placeBox.currentSelectedOG = placeBox.Selected.Wood;
			WoodParent.SetActive (true);
			//WoodParent.GetComponent<ParticleSystem> ().enableEmission = false;

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);
	

		}

		public void BrickButtonSelected() { // Brick

			WoodParent.SetActive (false);
			BrickParent.SetActive (false);
			TorchParent.SetActive (false);
			RandColorParent.SetActive (false);
			WaterParent.SetActive (false);
			StalactiteParent.SetActive (false);
			TreeParent.SetActive (false);
			SandParent.SetActive (false);

			currentSelected = Selected.Brick;
			placeBox.currentSelectedOG = placeBox.Selected.Brick;
			BrickParent.SetActive (true);
			//BrickParent.GetComponent<ParticleSystem> ().enableEmission = false;

			item_wood.SetActive (false);
			item_brick.SetActive (false);
			item_torch.SetActive (false);
			item_rand.SetActive (false);
			item_water.SetActive (false);
			item_stala.SetActive (false);
			item_tree.SetActive (false);
			item_sand.SetActive (false);

	
		}

		public void TorchButtonSelected() { // Torch
			
			WoodParent.SetActive (false);
			BrickParent.SetActive (false);
			TorchParent.SetActive (false);
			RandColorParent.SetActive (false);
			WaterParent.SetActive (false);
			StalactiteParent.SetActive (false);
			TreeParent.SetActive (false);
			SandParent.SetActive (false);

			currentSelected = Selected.Torch;
			placeBox.currentSelectedOG = placeBox.Selected.Torch;
			TorchParent.SetActive (true);
			//Block3Parent.GetComponent<ParticleSystem> ().enableEmission = true;

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
			
			WoodParent.SetActive (false);
			BrickParent.SetActive (false);
			TorchParent.SetActive (false);
			RandColorParent.SetActive (false);
			WaterParent.SetActive (false);
			StalactiteParent.SetActive (false);
			TreeParent.SetActive (false);
			SandParent.SetActive (false);

			currentSelected = Selected.RandColor;
			placeBox.currentSelectedOG = placeBox.Selected.RandColor;
			RandColorParent.SetActive (true);
			//RandColorParent.GetComponent<ParticleSystem> ().enableEmission = false;

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
			WoodParent.SetActive (false);
			BrickParent.SetActive (false);
			TorchParent.SetActive (false);
			RandColorParent.SetActive (false);
			WaterParent.SetActive (false);
			StalactiteParent.SetActive (false);
			TreeParent.SetActive (false);
			SandParent.SetActive (false);

			currentSelected = Selected.Water;
			placeBox.currentSelectedOG = placeBox.Selected.Water;
			WaterParent.SetActive (true);
			//WaterParent.GetComponent<ParticleSystem> ().enableEmission = false;

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
			WoodParent.SetActive (false);
			BrickParent.SetActive (false);
			TorchParent.SetActive (false);
			RandColorParent.SetActive (false);
			WaterParent.SetActive (false);
			StalactiteParent.SetActive (false);
			TreeParent.SetActive (false);
			SandParent.SetActive (false);

			currentSelected = Selected.Stalactite;
			placeBox.currentSelectedOG = placeBox.Selected.Stalactite;
			StalactiteParent.SetActive (true);
			//WaterParent.GetComponent<ParticleSystem> ().enableEmission = true;

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
			WoodParent.SetActive (false);
			BrickParent.SetActive (false);
			TorchParent.SetActive (false);
			RandColorParent.SetActive (false);
			WaterParent.SetActive (false);
			StalactiteParent.SetActive (false);
			TreeParent.SetActive (false);
			SandParent.SetActive (false);

			currentSelected = Selected.Tree;
			placeBox.currentSelectedOG = placeBox.Selected.Tree;
			TreeParent.SetActive (true);
			//WaterParent.GetComponent<ParticleSystem> ().enableEmission = true;

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
			WoodParent.SetActive (false);
			BrickParent.SetActive (false);
			TorchParent.SetActive (false);
			RandColorParent.SetActive (false);
			WaterParent.SetActive (false);
			StalactiteParent.SetActive (false);
			TreeParent.SetActive (false);
			SandParent.SetActive (false);

			currentSelected = Selected.Sand;
			placeBox.currentSelectedOG = placeBox.Selected.Sand;
			SandParent.SetActive (true);
			//WaterParent.GetComponent<ParticleSystem> ().enableEmission = false;

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
