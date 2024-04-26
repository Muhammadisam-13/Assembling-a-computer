#include<iostream>
#include "ComputerAssembly.h"
#include<chrono>
#include<thread>
/*
Muhammad Isam
CS - B
23I-0735
Instructor: Dr. Ali Zeeshan
TA: Mr. Muhammad Mohsin Ramzan
*/
using namespace std;

int main()
{
	
	int deviceinput;
	int physicalmemory;
	string storagedevicetype;
	string networkcardtype;
	string formfactor;
	string formfactorcolor;
	int storagedevicecapacity;

	cout << "What kind of device do you want to build? 1) MacBook  2) Intel-based Computer\n";
	cin >> deviceinput;
	
	switch (deviceinput)
	{
	case 1:
	{
		MacAssembly macbook;
		cout << "How much physical memory do you want? (4GB, 8GB, 16GB, 32GB)" << endl;
		cin >> physicalmemory;
		while ((physicalmemory != 4) && (physicalmemory != 8) && (physicalmemory != 16) && (physicalmemory != 32))
		{
			cout << "Invalid input. Enter again or press -1 to exit";
			cin >> physicalmemory;
			if (physicalmemory == -1)
				return 0;
		}
		cout << "What kind of storage device do you want? 1) Hard disk drive  2) SSD\n";
		int storagedev;
		cin >> storagedev;
		while (storagedev != 1 && storagedev != 2)
		{
			cout << "Invalid input. Enter again";
			cin >> storagedev;
		}
		switch (storagedev)
		{
		case 1:
		{
			storagedevicetype = "HDD"; break;
		}
		case 2:
		{
			storagedevicetype = "SSD"; break;
		}
		default: storagedevicetype = "SSD";
		}
		
		cout << "Specify the capacity that you want\n";
		cin >> storagedevicecapacity;
		while (storagedevicecapacity != 256 && storagedevicecapacity != 512 && storagedevicecapacity != 1024 && storagedevicecapacity != 1)
		{
			cout << "Invalid input. Enter again";
			cin >> storagedevicecapacity;
		}
		cout << "What kind of netword card do you want?\n";
		cin >> networkcardtype;
		cout << "What kind of form factor do you want?\n";
		cin >> formfactor;
		cout << "Color? ";
		cin >> formfactorcolor;

		macbook.getNC().setNCtype(networkcardtype);
		macbook.getPhysicalMemory().getstoragedevice().setSDcapacity(storagedevicecapacity);
		macbook.getPhysicalMemory().getstoragedevice().setSDtype(storagedevicetype);
		macbook.getPhysicalMemory().getmainmemory().setMMcapacity(physicalmemory);
		macbook.getcase().setCaseFF(formfactor);
		macbook.getcase().setCaseColour(formfactorcolor);

		cout << endl;
		cout << "Assembling Computer..." << endl;
		this_thread::sleep_for(std::chrono::seconds(3));
		cout << endl;
		macbook.Displaycontents();
		break;
	}
	case 2:
	{
		IntelAssembly intel;
		cout << "How much physical memory do you want? (4GB, 8GB, 16GB, 32GB)" << endl;
		cin >> physicalmemory;
		while ((physicalmemory != 4) && (physicalmemory != 8) && (physicalmemory != 16) && (physicalmemory != 32))
		{
			cout << "Invalid input. Enter again or press -1 to exit";
			cin >> physicalmemory;
			if (physicalmemory == -1)
				return 0;
		} 
		int storagedev;
		cout << "What kind of storage device do you want? 1) Hard disk drive  2) SSD\n";
		cin >> storagedev;
		while (storagedev != 1 && storagedev != 2)
		{
			cout << "Invalid input. Enter again or press -1 to exit";
			cin >> storagedev;
		} 
		switch (storagedev)
		{
		case 1:
		{
			storagedevicetype = "HDD"; break;
		}
		case 2:
		{
			storagedevicetype = "SSD"; break;
		}
		default: storagedevicetype = "SSD";
		}
		
		cout << "Specify the capacity that you want\n";
		cin >> storagedevicecapacity;
		cout << "What kind of netword card do you want?\n";
		cin >> networkcardtype;
		cout << "What kind of form factor do you want?\n";
		cin >> formfactor;
		cout << "Color? ";
		cin >> formfactorcolor;
		intel.getNC().setNCtype(networkcardtype);
		intel.getPhysicalMemory().getstoragedevice().setSDcapacity(storagedevicecapacity);
		intel.getPhysicalMemory().getstoragedevice().setSDtype(storagedevicetype);
		intel.getPhysicalMemory().getmainmemory().setMMcapacity(physicalmemory);
		intel.getcase().setCaseFF(formfactor);
		intel.getcase().setCaseColour(formfactorcolor);
		cout << endl;
		cout << "Assembling Computer..." << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << endl;
		intel.Displaycontents();
		break;
	}
	default: cout << "Please choose a valid option\n";

	}
}