#pragma once
#include<iostream>
using namespace std;

class Battery
{
private:
	int capacity;
public:
	Battery() : capacity(5000) {}
	Battery(int c) : capacity(c) {}
	void setBatteryCapacity(int c);
	int getBatteryCapacity();
};

