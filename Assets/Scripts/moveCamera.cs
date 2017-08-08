using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveCamera : MonoBehaviour {

	//public Camera camera;
	private float lookSpeed = 0.01f; 
	private float moveSpeed = 5.0f; 
	private float rotationX = 0.0f; 
	private float rotationY = 0.0f; 
	private bool upBool, downBool, leftBool, rightBool, forwardBool, backwardBool, leftmoveBool, rightmoveBool;

	// Update is called once per frame
	void Update () {

		//rotationX += Input.GetAxis ("Mouse X") * lookSpeed;
		rotationX += 1 * lookSpeed;
		//rotationY += Input.GetAxis ("Vertical") * lookSpeed;
		rotationY = Mathf.Clamp (rotationY, -90, 90);

		// move forward
		if (upBool) {
			//Debug.Log ("I am moving UP");
			transform.position += transform.forward * moveSpeed * Time.deltaTime;
		}

		// move backward
		if (downBool) {
			//Debug.Log ("I am moving DOWN");
			transform.position += -transform.forward * moveSpeed * Time.deltaTime;
		}

		// move left
		if (leftmoveBool) {
			transform.position += -transform.right * moveSpeed * Time.deltaTime;
		}

		// move right
		if (rightmoveBool) {
			transform.position += transform.right * moveSpeed * Time.deltaTime;
		}






		// look left
		if (leftBool) {
			//Debug.Log ("I am moving LEFT");
			transform.localRotation *= Quaternion.AngleAxis (-rotationX, Vector3.up);
		}

		// look right
		if (rightBool) {
			//Debug.Log ("I am moving RIGHT");
			transform.localRotation *= Quaternion.AngleAxis (rotationX, Vector3.up);
		}

		// look up
		if (forwardBool) {
			//Debug.Log ("I am moving FORWARD");
			//transform.localRotation *= Quaternion.AngleAxis (-rotationY, Vector3.left);
			transform.position += transform.up * moveSpeed * Time.deltaTime;
		}

		// look down
		if (backwardBool) { 
			//Debug.Log ("I am moving BACKWARD");
			//transform.localRotation *= Quaternion.AngleAxis (rotationY, Vector3.left);
			transform.position += -transform.up * moveSpeed * Time.deltaTime;
		}

	}




	public void MoveForward_pd() {
		upBool = true;
	}
	public void MoveForward_pu() {
		upBool = false;
	}

	public void MoveBackward_pd() {
		downBool = true;
	}
	public void MoveBackward_pu() {
		downBool = false;
	}

	public void MoveLeft_pd() {
		leftmoveBool = true;
	}
	public void MoveLeft_pu() {
		leftmoveBool = false;
	}

	public void MoveRight_pd() {
		rightmoveBool = true;
	}
	public void MoveRight_pu() {
		rightmoveBool = false;
	}




	public void LookLeft_pd() {
		leftBool = true;
	}
	public void LookLeft_pu() {
		leftBool = false;
	}

	public void LookRight_pd() {
		rightBool = true;
	}
	public void LookRight_pu() {
		rightBool = false;
	}

	public void LookUp_pd() {
		forwardBool = true;
	}
	public void LookUp_pu() {
		forwardBool = false;
	}

	public void LookDown_pd() {
		backwardBool = true;
	}
	public void LookDown_pu() {
		backwardBool = false;
	}


}
