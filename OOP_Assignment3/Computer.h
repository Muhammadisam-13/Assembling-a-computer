#pragma once
#include<iostream>
#include "MotherBoard.h"
#include "PhysicalMemory.h"
#include "CPU.h"
using namespace std;

class Computer
{
protected:
	MotherBoard mb; // inherited classes will have motherboard
public:
	virtual string getcomputertype() { return "Generic Computer\n"; }
};

class MacBook : public Computer
{
private:
	AppleSilicon Cpu; // cpu
	LPDDR pm; // physical memory
	string computertype;
public:
	MacBook() : computertype("Apple-based computer") {} // initialize pm and cpu
	void setPM(LPDDR& Pm);
	LPDDR& getPM();
	AppleSilicon& getCPU();
	virtual string getcomputertype();
};

class Intelcomputer : public Computer
{
private:
	Intel Cpu; // cpu
	DDR pm; // physical memory
	string computertype;
public:
	Intelcomputer() : computertype("Intel-based Computer") {} // initialize pm and cpu
	void setPM(DDR& Pm);
	DDR& getPM();
	Intel& getCPU();
	virtual string getcomputertype();
};

