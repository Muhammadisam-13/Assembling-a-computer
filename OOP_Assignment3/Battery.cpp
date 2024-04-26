#include<iostream>
#include "Battery.h"
using namespace std;

void Battery::setBatteryCapacity(int c)
{
	capacity = c;
}
int Battery::getBatteryCapacity()
{
	return capacity;
}