#pragma once
#include<iostream>
#include "ControlUnit.h"
using namespace std;

class ALU
{
protected:
	int NoOfAdders;
	int NoOfSubtractor;
	int NoOfRegisters;
	int sizeOfRegisters;
public:
	ALU() : NoOfAdders(1000), NoOfSubtractor(1000), NoOfRegisters(1000), sizeOfRegisters(1000) {}
	ALU(int adds, int subs, int regs, int size_regs) : NoOfAdders(adds), NoOfSubtractor(subs), NoOfRegisters(regs), sizeOfRegisters(size_regs) {}
	void setAddernum(int a);
	void setsubtractornum(int s);
	void setnumberofregisters(int num);
	void setsizeofregisters(int size);
	int getAddernum();
	int getsubtractornum();
	int getnumberofregisters();
	int getsizeofregisters();
};

