#include<iostream>
#include "MainMemory.h"
using namespace std;

void MainMemory::setMMcapacity(int c)
{
	capacity = c;
}
int MainMemory::getMMcapacity()
{
	return capacity;
}
void MainMemory::setMMtechnologyType(string str)
{
	technologyType = str;
}
string MainMemory::getMMtechnologyType()
{
	return technologyType;
}

void MainMemory::displayMainMemoryInfo()
{
	cout << "Main Memory: ";
	cout << capacity << "GB " << technologyType << endl;
}