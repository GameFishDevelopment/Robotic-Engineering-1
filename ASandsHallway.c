#pragma config(Motor,  port1,           rightMotor,    tmotorVex393_HBridge, openLoop, reversed, driveRight)
#pragma config(Motor,  port10,          leftMotor,     tmotorVex393_HBridge, openLoop, driveLeft)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


/*
	Project Tilte: Hallway Maze
	Team Members: Andy Wilcox
	Date: 9/27/17
	Section: REC1


	Task Description: Navigate the hallway to breezeway


	Pseudocode:
	Turn on robot
	Move robot forward
	Turn robot left
	Move robot forward
	Turn robot right
	Move robot forward
	Turn robot left
	Move robot forward
	Turn off motors

*/


int leftMotorSpeed = 63;
int rightMotorSpeed = 56;

//function to drive straight with given power and speed
void DriveStraight(int leftSpeed, int rightSpeed, int seconds) {
		startMotor(leftMotor, leftSpeed);
		startMotor(rightMotor, rightSpeed);
		wait1Msec(seconds * 1000);
		stopMotor(leftMotor);
		stopMotor(rightMotor);
}
//function to turn left
void TurnLeft(float seconds){
		startMotor(leftMotor, -63);
		startMotor(rightMotor, 63);
		wait1Msec(seconds * 1000);
		stopMotor(leftMotor);
		stopMotor(rightMotor);
}
//funtion to turn right
void TurnRight(float seconds){
		startMotor(leftMotor, 63);
		startMotor(rightMotor, -63);
		wait1Msec(seconds * 1000);
		stopMotor(leftMotor);
		stopMotor(rightMotor);
}

task main()
{
		//wait to get hands out of way
		wait1Msec(2000);
		DriveStraight(leftMotorSpeed,rightMotorSpeed,21);
		TurnLeft(0.8);
		DriveStraight(leftMotorSpeed,rightMotorSpeed,13);
		TurnRight(0.85);
		DriveStraight(leftMotorSpeed,rightMotorSpeed,22);
		TurnLeft(0.8);
		DriveStraight(leftMotorSpeed,rightMotorSpeed,4);
}
