using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveCamera : MonoBehaviour {

	public Camera camera;
	private float lookSpeed = 15.0f; 
	private float moveSpeed = 0.2f; 
	private float rotationX = 0.0f; 
	private float rotationY = 0.0f; 

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

	}

	public void MoveUp() {
		transform.position += transform.up*moveSpeed*Time.deltaTime;
	}

	public void MoveDown() {
		transform.position -= transform.up*moveSpeed*Time.deltaTime;
	}

	public void MoveLeft() {
		transform.position += transform.right*moveSpeed*Time.deltaTime;
	}

	public void MoveRight() {
		transform.position -= transform.right*moveSpeed*Time.deltaTime;
	}

	public void MoveForward() {
		transform.position += transform.forward*moveSpeed*Time.deltaTime;
	}

	public void MoveBackward() {
		transform.position -= transform.forward*moveSpeed*Time.deltaTime;

	}
}
