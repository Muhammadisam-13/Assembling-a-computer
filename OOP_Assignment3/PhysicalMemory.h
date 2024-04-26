#pragma once
#include<iostream>
#include "StorageDevice.h"
#include "MainMemory.h"
#include "Case.h"
using namespace std;

class PhysicalMemory
{
protected:
	int capacity;
	StorageDevice sd;
	MainMemory mm;
	// Explanation : Physical memory is composed of Storage device and Main Memory

public:
	PhysicalMemory();
	PhysicalMemory(StorageDevice& SD, MainMemory& MM);
	void setPMcapacity(int c);
	int getPMcapacity();
	void displayPhysicalMemoryInfo();
	StorageDevice& getstoragedevice();
	MainMemory& getmainmemory();

};

// Slight difference between LPDDR AND DDR :
class LPDDR : public PhysicalMemory
{
private:
	string formfactor;
public:
	LPDDR() : formfactor("Small Outline DIMM") {}
	LPDDR(StorageDevice& SD, MainMemory& MM) : formfactor("Small Outline DIMM"), PhysicalMemory(SD, MM) {}
	void displayFF();
};

class DDR : public PhysicalMemory
{
private:
	string formfactor;
public:
	DDR() : formfactor("Standard DIMM") {}
	DDR(StorageDevice& SD, MainMemory& MM) : formfactor("Standard DIMM"), PhysicalMemory(SD, MM) {}
	void displayFF();
};
