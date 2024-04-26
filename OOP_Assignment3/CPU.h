#pragma once
#include<iostream>
#include "ALU.h"
#include "ControlUnit.h"
#include "GraphicsCard.h"
using namespace std;

class CPU
{
protected:
	ALU* alu; // composition 
	ControlUnit* cu; // composition
public:
	CPU();
	CPU(int add, int sub, int num, int size, float clock);
	void setAlu(int add, int sub, int num, int size);
	void setCu(float clock);
	ALU getAlu();
	ControlUnit getCu();
	~CPU();
};

class AppleSilicon : public CPU
{
private:
	AppleGPU* applegpu;
public:
	AppleSilicon(); // initialize applegpu in default, due to integrated Graphics card (AppleGPU) in AppleSilicon
	AppleGPU getgpu();
	void displaygpu();
	
};

class Intel : public CPU
{
private:
	AMDGPU* amd; // aggregation
public:
	Intel() : amd(nullptr) {} // no GPU if default constructor is called (user requests for Intel CPU without integrated GPU
	Intel(AMDGPU* amd);
	void displaygpu();
	
};



