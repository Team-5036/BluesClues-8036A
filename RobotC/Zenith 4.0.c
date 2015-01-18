#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_4,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Motor,  port1,           frontLeftSC,   tmotorVex393HighSpeed_HBridge, PIDControl, driveLeft, encoderPort, I2C_1)
#pragma config(Motor,  port2,           frontRightSC,  tmotorVex393HighSpeed_MC29, PIDControl, driveRight, encoderPort, I2C_2)
#pragma config(Motor,  port3,           backLeftSC,    tmotorVex393HighSpeed_MC29, PIDControl, reversed, driveLeft, encoderPort, I2C_3)
#pragma config(Motor,  port4,           backRightSC,   tmotorVex393HighSpeed_MC29, PIDControl, reversed, driveRight, encoderPort, I2C_4)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
const int threshold = 5;
const int upperthreshold = 100;
#include "JoystickDriver.c"
/**Called once the robot is initialized*/
task robotInit(){
	
}
/**Called once the robot is disabled*/
task disabledInit(){
	
}
/** Called while the robot is in autonomous mode*/
task autonomousPeriodic(){
	int leftspeed;
	intrightspeed;
	leftSpeed = 129;
	rightSpeed = 129;
		motor[frontLeftSC]  =  leftSpeed;
		motor[frontRightSC] = rightSpeed;
		motor[backLeftSC] = leftSpeed;
		motor[backRightSC] = rightSpeed;
}
/**Called while the robot is in telop mode*/
task teleopPeriodic(){
	//								TANKDRIVE CODE
	int leftSpeed = (vexRT[Ch3] + vexRT[Ch1]);
	int rightSpeed = (vexRT[Ch3] - vexRT[Ch1]);
	while(true){
		motor[frontLeftSC]  =  leftSpeed;
		motor[frontRightSC] = rightSpeed;
		motor[backLeftSC] = leftSpeed;
		motor[backRightSC] = rightSpeed;

	}
	//								X-DRIVE CODE
}
/**Called whiled the robot is in test mode*/
task testPeriodic()
{
	while(true)	{
		//						TEST DRIVE CODE
		getJoystickSettings(joystick);
		if(abs(joystick.joy1_y2) > upperthreshold) {
			int rightSpeed = 100;
			motor[frontRightSC] = rightSpeed;
			motor[backRightSC] = rightSpeed;
		}
		else if(abs(joystick.joy1_y2) > threshold) {
			int rightSpeed = joystick.joy1_y2;
			motor[frontRightSC] = rightSpeed;
			motor[backRightSC] = rightSpeed;
		}
		else {
			motor[frontRightSC] = 0;
			motor[backRightSC] = 0;
		}
		if(abs(joystick.joy1_y1) > upperthreshold) {
			int leftSpeed = 100;
			motor[frontLeftSC] = leftSpeed;
			motor[frontRightSC] = leftSpeed;
		}
		else if(abs(joystick.joy1_y1) > threshold) {
			int leftSpeed = joystick.joy1_y1;
			motor[frontLeftSC] = leftSpeed;
			motor[backLeftSC] = leftSpeed;
		}
		else {
			motor[frontLeftSC] = 0;
			motor[backLeftSC] = 0;
		}

	}
}