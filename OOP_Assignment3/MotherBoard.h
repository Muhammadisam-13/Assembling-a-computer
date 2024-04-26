#pragma once
#include<iostream>
#include "MainMemory.h"
#include "Port.h"
class MotherBoard
{
protected:
	MainMemory mm;
	Port* ports;
public:
	MotherBoard();
	void displayPorts();
	~MotherBoard();	
};

