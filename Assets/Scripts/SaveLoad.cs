using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;


public class SaveLoad : MonoBehaviour {

	public GameObject randColorPrefab, woodPrefab, brickPrefab, torchPrefab, waterPrefab, stalactitePrefab, treePrefab, sandPrefab;
	private GameObject boxGO;
	private MaterialPropertyBlock props;

	private string blockName;
	private Vector3 blockPosition;

	//private int blockListNum;

	void Start () {
		props = new MaterialPropertyBlock ();
	}

	public void Save() {
		// Setup binaryformatter and file to save contents
		BinaryFormatter bf = new BinaryFormatter();


		// Check for number of current saves, and increment to next one
//		while(File.Exists (Application.persistentDataPath + "/blockList" + blockListNum +  ".dat") {
//			blockListNum++;
//		}


		if (File.Exists (Application.persistentDataPath + "/blockList.dat")) {
			File.Delete (Application.persistentDataPath + "/blockList.dat");
		}
		FileStream file = File.Create(Application.persistentDataPath + "/blockList.dat");

		

		// Setup class to be saved, and similar object (local)
		AllBlockData data = new AllBlockData ();
		List<BlockData> saveBlockLocation = new List<BlockData>();

		// Look for all instantiated gameObjects in scene and save their position and name
		GameObject[] blocksInScene = FindObjectsOfType (typeof(GameObject)) as GameObject[];
		foreach (GameObject block in blocksInScene) {
			if (block.CompareTag("placedBox")) {
				Debug.Log ("Saving GameObject At: " + block.transform.position);
				Debug.Log ("Saving a " + block.name);
				saveBlockLocation.Add(new BlockData (block.transform.position.x, block.transform.position.y, block.transform.position.z, block.name));
			}
		}
			

		data.allBlocksLocation = saveBlockLocation;

		Debug.Log ("Saving is Done");

		bf.Serialize (file, data);
		file.Close ();
	
	}

	public void Load() {
		// Setup binaryformatter and look for file to extract contents
		BinaryFormatter bf = new BinaryFormatter ();

		if (File.Exists (Application.persistentDataPath + "/blockList.dat")) {
			FileStream file = File.Open (Application.persistentDataPath + "/blockList.dat", FileMode.Open);
			AllBlockData data = (AllBlockData)bf.Deserialize (file);
			file.Close ();
		
			// Get gameObject list
			List<BlockData> loadBlockLocation = new List<BlockData> ();
			loadBlockLocation = data.allBlocksLocation;

			// Look for objects with same name as our blocks
			foreach (BlockData blockdata in loadBlockLocation) {
				blockName = blockdata.BlockDataGetName ();
				blockPosition = blockdata.BlockDataGet ();
				Debug.Log ("Loading: " + blockName + " from " + blockPosition);
		
				switch (blockName) {
				case "Brick(Clone)":
					Instantiate (brickPrefab, blockPosition, Quaternion.identity);
					break;
				case "mcBox(Clone)":
					boxGO = Instantiate (randColorPrefab, blockPosition, Quaternion.identity);
					float r = UnityEngine.Random.Range (0.0f, 1.0f);
					float g = UnityEngine.Random.Range (0.0f, 1.0f);
					float b = UnityEngine.Random.Range (0.0f, 1.0f);

					props.SetColor ("_InstanceColor", new Color (r, g, b));

					MeshRenderer renderer = boxGO.GetComponent<MeshRenderer> ();
					renderer.SetPropertyBlock (props);
					break;
				case "Sand(Clone)":
					Instantiate (sandPrefab, blockPosition, Quaternion.identity);
					break;
				case "StalaTest(Clone)":
					Instantiate (stalactitePrefab, blockPosition, Quaternion.identity);
					break;
				case "Torch_Fire(Clone)":
					Instantiate (torchPrefab, blockPosition, Quaternion.identity);
					break;
				case "Tree_2(Clone)":
					Instantiate (treePrefab, blockPosition, Quaternion.identity);
					break;
				case "Water(Clone)":
					Instantiate (waterPrefab, blockPosition, Quaternion.identity);
					break;
				case "Wood(Clone)":
					Instantiate (woodPrefab, blockPosition, Quaternion.identity);
					break;
				default:
					break;
				}
			}
		} else {
			Debug.Log ("Cannot load File: File does not exist.");

		}

		Debug.Log ("Loading is Done");
	}
}

// class of individual gameObject information
[Serializable]
class BlockData {
	private float locx;
	private float locy;
	private float locz;
	private string type;

	public BlockData() {
		Debug.Log ("Initializing empty BlockData object");
	}

	public BlockData(float x, float y, float z, string newType) {
		locx = x;
		locy = y;
		locz = z;
		type = newType;
	}

	public Vector3 BlockDataGet() {
		return new Vector3 (locx, locy, locz);
	}

	public string BlockDataGetName() {
		return type;
	}
		
}

// class of list of all gameObject information objects (BlockData class)
[Serializable]
class AllBlockData {

	public List<BlockData> allBlocksLocation;

	public AllBlockData() {
		Debug.Log("Initializign AllBlockData object");
		this.allBlocksLocation = new List<BlockData>();
	}

	public void AllBlockDataAdd(BlockData block) {
		Debug.Log("Adding BlockData object to list");
		allBlocksLocation.Add (block);
	}

}
