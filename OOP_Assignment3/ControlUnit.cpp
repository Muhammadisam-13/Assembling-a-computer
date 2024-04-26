#include<iostream>
#include "ControlUnit.h"
using namespace std;

void ControlUnit::setclock(float c)
{
	this->clock = c;
}
float ControlUnit::getclock()
{
	return clock;
}