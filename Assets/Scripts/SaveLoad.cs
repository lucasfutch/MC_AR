using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

public class SaveLoad : MonoBehaviour {

	public static SaveLoad control;
	public int allBlocksLength;

	public GameObject[] allBlocks;

	private Vector3 location;
	private Vector3 bringUp = new Vector3(0, 1, 0);
	//public List<BlockData> blocksLocation;

	//public GameObject randColorPrefab, woodPrefab, brickPrefab, torchPrefab, waterPrefab, stalactitePrefab, treePrefab, sandPrefab;


	void Awake () {
		if (control == null) {
			DontDestroyOnLoad (gameObject);
			control = this;
		} else if (control != this) {
			Destroy(gameObject);
		}
	}

	void Start() {
		
	}
				
	public void Save() {
		BinaryFormatter bf = new BinaryFormatter();
		FileStream file = File.Create(Application.persistentDataPath + "/blockList.dat");

		//BlockData data = new BlockData ();
		AllBlockData data2 = new AllBlockData ();
		List<BlockData> allBlocksLocation_save = new List<BlockData>();

		GameObject[] blocksInScene = FindObjectsOfType (typeof(GameObject)) as GameObject[];
		foreach (GameObject block in blocksInScene) {
			if (block.CompareTag("placedBox")) {
				Debug.Log ("Saving GameObject At: " + block.transform.position);
				Debug.Log ("Saving a " + block.name);
				//data.allBlocks [allBlocksLength] = block;
				//allBlocksLength++;
				allBlocksLocation_save.Add(new BlockData (block.transform.position.x, block.transform.position.y, block.transform.position.z, block.name));
				//data2.AllBlockDataAdd (new BlockData (block.transform.position));
			}
		}
		data2.allBlocksLocation = allBlocksLocation_save;
		//data.allBlocks = blocksInScene;
		Debug.Log("Able to save to data2 object");

		bf.Serialize (file, data2);
		file.Close ();
	
	}

	public void Load() {
		BinaryFormatter bf = new BinaryFormatter ();
		FileStream file = File.Open (Application.persistentDataPath + "/blockList.dat", FileMode.Open);
		//BlockData data = (BlockData)bf.Deserialize (file);
		AllBlockData data2 = (AllBlockData)bf.Deserialize (file);
		file.Close ();
		List<BlockData> blocksLocation = new List<BlockData> ();
		List<BlockData> allBlocksLocation_load = new List<BlockData>();

		blocksLocation = data2.allBlocksLocation;

		foreach (BlockData blockdata in blocksLocation) {
			string nameOf = blockdata.BlockDataGetName ();
			if ((nameOf == "Brick(Clone)") || (nameOf == "mcBox(Clone)") || (nameOf == "Sand(Clone)") || (nameOf == "StalaTest(Clone)") || (nameOf == "Torch_Fire1(Clone)") || (nameOf == "Tree_2(Clone)") || (nameOf == "Water(Clone)") || (nameOf == "Wood(Clone)")) {
				Debug.Log ("Loading: " + blockdata.BlockDataGetName () + " from " + blockdata.BlockDataGet ());
				Instantiate (Resources.Load (blockdata.BlockDataGetName ()), blockdata.BlockDataGet () * 100, Quaternion.identity);
				// change to statement from placebox to remove resources folder
				// cleaner operation
				// have a currentSelectedPrefab enum or something
			}
		}

	}
}

[Serializable]
class BlockData {
	private float locx;
	private float locy;
	private float locz;
	private string type;

	//public List<BlockData> blocksLocation;// = new List<BlockData>();

	public BlockData() {
		Debug.Log ("Initializing BlockData object");
		//List<BlockData> blocksLocation = new List<BlockData>();
	}

	public BlockData(float x, float y, float z, string newType) {
		Debug.Log ("Adding info to BlockData object");
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

[Serializable]
class AllBlockData {

	public List<BlockData> allBlocksLocation;

	public AllBlockData() {
		Debug.Log("Initializign AllBlockData object");
		List<BlockData> allBlocksLocation = new List<BlockData>();
	}

	public void AllBlockDataAdd(BlockData block) {
		Debug.Log("Adding BlockData object to list");
		allBlocksLocation.Add (block);
	}

//	public List<BlockData> AllBlockDataGet() {
//		return allBlocksLocation;
//	}
}
