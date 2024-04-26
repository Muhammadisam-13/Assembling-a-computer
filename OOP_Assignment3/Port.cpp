#include<iostream>
#include "Port.h"
using namespace std;

void Port::setType(string str)
{
	type = str;
}
void Port::setBaud_rate(int r)
{
	baud_rate = r;
}
string Port::getType()
{
	return type;
}
int Port::getBaud_rate()
{
	return baud_rate;
}