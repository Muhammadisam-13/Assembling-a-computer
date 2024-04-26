#include<iostream>
#include "PhysicalMemory.h"

PhysicalMemory::PhysicalMemory()
{
	capacity = 64; // 4 16GB RAM modules
	sd.setSDtype("SSD");
	sd.setSDcapacity(256);
	sd.setSDprice(20.00);
	mm.setMMcapacity(64); // Main Memory + SSD
	mm.setMMtechnologyType("RAM");
}

PhysicalMemory::PhysicalMemory(StorageDevice& SD, MainMemory& MM)
{
	sd.setSDcapacity(SD.getSDcapacity());
	sd.setSDtype(SD.getSDtype());
	sd.setSDprice(SD.getSDprice());
	mm.setMMtechnologyType(MM.getMMtechnologyType());
	mm.setMMcapacity(MM.getMMcapacity());
	int memoryslots = 4; // example of number of memory slots which will determine physical memory capacity
	this->capacity = (4 * MM.getMMcapacity()) + SD.getSDcapacity(); // calculated capacity of physical memory
}
void PhysicalMemory::setPMcapacity(int c)
{
	capacity = c;
}
int PhysicalMemory::getPMcapacity()
{
	return capacity;
}

void PhysicalMemory::displayPhysicalMemoryInfo()
{
	sd.displayStorageDeviceInfo();
	mm.displayMainMemoryInfo();
}

void LPDDR::displayFF()
{
	cout << "Form Factor: " << formfactor << endl;
}

void DDR::displayFF()
{
	cout << "Form Factor: " << formfactor << endl;
}

StorageDevice &PhysicalMemory::getstoragedevice()
{
	return sd;
}
MainMemory &PhysicalMemory::getmainmemory()
{
	return mm;
}