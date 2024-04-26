#include<iostream>
#include "ALU.h"
using namespace std;

void ALU::setAddernum(int a)
{
	this->NoOfAdders = a;
}
void ALU::setsubtractornum(int s)
{
	this->NoOfSubtractor = s;
}
void ALU::setnumberofregisters(int num)
{
	this->NoOfRegisters = num;
}
void ALU::setsizeofregisters(int size)
{
	this->sizeOfRegisters = size;
}
int ALU::getAddernum()
{
	return NoOfAdders;
}
int ALU::getsubtractornum()
{
	return NoOfSubtractor;
}
int ALU::getnumberofregisters()
{
	return NoOfRegisters;
}
int ALU::getsizeofregisters()
{
	return sizeOfRegisters;
}

