/*
 Name:		dedahuong.ino
 Created:	7/11/2018 2:05:53 PM
 Author:	quang
*/
#include"Configuration.h"
#include"control.h"

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	pinMode(PIN_PULSE_OMNI, OUTPUT);
	pinMode(PIN_DIR_OMNI, OUTPUT);
	//
	pinMode(PIN_PULSE_MECANUM_LEFT, OUTPUT);
	pinMode(PIN_DIR_MECANUM_LEFT, OUTPUT);
	//
	pinMode(PIN_PULSE_MECANUM_RIGHT, OUTPUT);
	pinMode(PIN_DIR_MECANUM_RIGHT, OUTPUT);
	//
	//
}

// the loop function runs over and over again until power down or reset
void loop() {
	//goStraight(50);
	//run(7*PI/12, 50);
	move(30,0,0);
}

