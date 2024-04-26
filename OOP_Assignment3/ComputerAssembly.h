#pragma once
#include<iostream>
#include "Battery.h"
#include "Case.h"
#include "CPU.h"
#include "NetwordCard.h"
#include "PowerSupply.h"
#include "Computer.h"

using namespace std;

class ComputerAssembly
{
protected:
	double totalPrice;
	NetwordCard nc;
	PowerSupply ps;
	Battery b;
	Case c;
public:
	void setTotalprice(int p);
	void setNC(NetwordCard& N);
	NetwordCard& getNC();
	void setPS(PowerSupply& P);
	Case& getcase();
	PowerSupply& getPS();
	
	
};

class MacAssembly : public ComputerAssembly
{
private:
	MacBook mac;
public:
	MacAssembly() {}
	MacBook& getmac();
	void Displaycontents();
	void setPhysicalMemory(LPDDR& other);
	PhysicalMemory& getPhysicalMemory();
};

class IntelAssembly : public ComputerAssembly
{
private:
	Intelcomputer intelpc;
public:
	IntelAssembly() {}
	Intelcomputer& getpc();
	void Displaycontents();
	void setPhysicalMemory(DDR& other);
	PhysicalMemory& getPhysicalMemory();
};
