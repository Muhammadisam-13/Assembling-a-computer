#include "Computer.h"
#include<iostream>
using namespace std;
/*
void Computer::setcomputertype(string str)
{
	computertype = str;
}
string Computer::getcomputertype()
{
	return computertype;
}
*/

void MacBook::setPM(LPDDR& Pm)
{
	pm.setPMcapacity(Pm.getPMcapacity());
	
}

void Intelcomputer::setPM(DDR& Pm)
{
	pm.setPMcapacity(Pm.getPMcapacity());
}

LPDDR& MacBook::getPM()
{
	return pm;
}

DDR& Intelcomputer::getPM()
{
	return pm;
}

Intel& Intelcomputer::getCPU()
{
	return Cpu;
}
AppleSilicon& MacBook::getCPU()
{
	return Cpu;
}

string MacBook::getcomputertype()
{
	return computertype;
}
string Intelcomputer::getcomputertype()
{
	
	return computertype;
}
