#include<iostream>
#include "GraphicsCard.h"
using namespace std;

void GraphicsCard::setGCbrandname(string str)
{
	brand = str;
}
string GraphicsCard::getGCbrandname()
{
	return brand;
}
// Specific to AMDGPU as they are available for purchase
void AMDGPU::setGCprice(double p)
{
	price = p;
}
void AMDGPU::setGCmemorysize(int s) 
{
	memorysize = s;
}
double AMDGPU::getGCprice()
{
	return price;
}
int AMDGPU::getGCmemorysize()
{
	return memorysize;
}

void GraphicsCard::display()
{
	cout << "Graphics Card: " << brand << ", " << memorysize << "GB " << endl;
}

void AMDGPU::display()
{
	GraphicsCard::display();
	cout << "Price: " << price << endl;
}
