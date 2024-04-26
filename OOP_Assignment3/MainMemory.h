#pragma once
#include<iostream>
using namespace std;
class MainMemory
{
protected:
	int capacity;
	string technologyType; // eg semiconductor, silicon
public:
	MainMemory() : capacity(1), technologyType("") {}
	MainMemory(int c, string str) : capacity(c), technologyType(str) {}
	void setMMcapacity(int c);
	int getMMcapacity();
	void setMMtechnologyType(string str);
	string getMMtechnologyType();
	void displayMainMemoryInfo();
};

