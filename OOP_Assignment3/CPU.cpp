#include<iostream>
#include "CPU.h"
using namespace std;

CPU::CPU()
{
	alu = new ALU; // default values added
	cu = new ControlUnit(); // default clock value added
	alu->setAddernum(1);
	alu->setsubtractornum(1);
	alu->setnumberofregisters(1);
	alu->setsizeofregisters(1);
	cu->setclock(2.0f);

}

CPU::CPU(int add, int sub, int num, int size, float clock)
{
	alu->setAddernum(add);
	alu->setsubtractornum(sub);
	alu->setnumberofregisters(num);
	alu->setsizeofregisters(size);
	cu->setclock(clock);
}

void CPU::setAlu(int add, int sub, int num, int size)
{
	alu->setAddernum(add);
	alu->setsubtractornum(sub);
	alu->setnumberofregisters(num);
	alu->setsizeofregisters(size);
}
void CPU::setCu(float clock)
{
	cu->setclock(clock);
}
ALU CPU::getAlu()
{
	return *alu;
}
ControlUnit CPU::getCu()
{
	return *cu;
}

CPU::~CPU()
{
	delete alu; // both composed so delete both
	delete cu;
}

// AppleSilicon
AppleSilicon::AppleSilicon()
{
	double price = 500.00;
	applegpu = new AppleGPU; //  ("Apple Silicon GPU", 8, price);
}
AppleGPU AppleSilicon::getgpu()
{
	return *applegpu;
}
Intel::Intel(AMDGPU* AM)
{
	amd = AM; // (aggregation)
}

void AppleSilicon::displaygpu()
{
	applegpu->display();
}

void Intel::displaygpu()
{
	if (amd != nullptr)
	{
		cout << "Brand: ";
		amd->getGCbrandname();
		cout << endl;
		cout << "Memory size: ";
		amd->getGCmemorysize();
		cout << endl;
		cout << "Price: ";
		amd->getGCprice();
		cout << endl;
	}
}