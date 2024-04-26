#pragma once
#include<iostream>
#include "ALU.h"
using namespace std;

class ControlUnit
{
protected:
	float clock;
public:
	ControlUnit() : clock(2.0) {} // Range of 2GHz to 5GHz typically
	ControlUnit(float c) : clock(c) {}
	void setclock(float c);
	float getclock();
};

