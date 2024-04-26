#include<iostream>
using namespace std;
#include "ComputerAssembly.h"

MacBook& MacAssembly::getmac()
{
	return mac;
}

Intelcomputer& IntelAssembly::getpc()
{
	return intelpc;
}
void IntelAssembly::setPhysicalMemory(DDR& other)
{
	intelpc.getPM().setPMcapacity(other.getPMcapacity());
}
void MacAssembly::setPhysicalMemory(LPDDR& other)
{
	mac.getPM().setPMcapacity(other.getPMcapacity());
}
void IntelAssembly::Displaycontents()
{
	cout << "Your requirements have been fulfilled! " << endl << endl;
	cout << "Company: " << intelpc.getcomputertype() << endl;
	cout << "CPU: Intel" << endl; 
	intelpc.getPM().displayPhysicalMemoryInfo();
	intelpc.getCPU().displaygpu();
	nc.displayNCinfo();
	c.displayCase();
	cout << "Total price: $1499" << endl;
	
}

void MacAssembly::Displaycontents()
{
	cout << "Your requirements have been fulfilled! " << endl << endl;
	cout << "Company: " << mac.getcomputertype() << endl;
	cout << "CPU: Apple Silicon" << endl;
	mac.getPM().displayPhysicalMemoryInfo();
	mac.getCPU().displaygpu();
	nc.displayNCinfo();
	c.displayCase();
	cout << "Total price: $1499" << endl;
}

void ComputerAssembly::setNC(NetwordCard& N)
{
	nc.setNCtype(N.getNCtype());
	nc.setNCspeed(N.getNCspeed());
	nc.setNCprice(20);
}
NetwordCard& ComputerAssembly::getNC()
{
	return nc;
}
Case& ComputerAssembly::getcase()
{
	return c;
}
void ComputerAssembly::setPS(PowerSupply& P)
{
	ps.setPSefficiencyrating(P.getPSefficiencyrating());
	ps.setPSwattage(300);
}
PowerSupply& ComputerAssembly::getPS()
{
	return ps;
}

PhysicalMemory& MacAssembly::getPhysicalMemory() 
{
	return mac.getPM();
}

PhysicalMemory& IntelAssembly::getPhysicalMemory()
{
	return intelpc.getPM();
}
