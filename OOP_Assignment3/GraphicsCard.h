#pragma once
#include<iostream>
using namespace std;

class GraphicsCard
{
protected:
	string brand;
	int memorysize;
public:
	GraphicsCard() : brand("Apple Silicon GPU"), memorysize(2) {} // only for calling inside applegpu, will not be called separately
	GraphicsCard(string str, int m, double p) : brand(str), memorysize(m) {}
	void setGCbrandname(string str);
	string getGCbrandname();
	virtual void display();
	
};

class AppleGPU : public GraphicsCard
{
public:
	AppleGPU() : GraphicsCard() {}
	
};

// Specific data members and functions only for AMDGPUs as they are available for purchase separately while applegpus are not
class AMDGPU : public GraphicsCard
{
private:
	double price; 
public:
	void setGCmemorysize(int s); 
	int getGCmemorysize();
	void setGCprice(double p);
	double getGCprice();
	void display();
};