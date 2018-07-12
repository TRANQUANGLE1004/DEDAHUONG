#pragma once
/*decription*/
// I trung điểm mecanum
// A bánh Left
// B bánh Right
//
#include"Configuration.h"
#ifndef _CONTROL_H_
#define _CONTROL_H_

void controlOmni(int _speed);
void controlMecanumLeft(int _speed);
void controlMecanumRight(int _speed);
void goStraight(int _speed);
void move(double _omega, double _vIx, double _vIy);
void goBack(int _speed);
void run(double _alpha,double _speed);
void circle(int _speed);
#endif // !_CONTROL_H_
