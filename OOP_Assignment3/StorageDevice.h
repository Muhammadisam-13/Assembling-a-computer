#pragma once
#include<iostream>
using namespace std;
class StorageDevice
{
protected:
	string type; // (ssd, hdd)
	int capacity; // (GBS)
	double price;
public:
	StorageDevice() : type("SSD"), capacity(256), price(20) {} // ($20)
	void setSDtype(string str);
	void setSDcapacity(int c);
	void setSDprice(double p);
	string getSDtype();
	int getSDcapacity();
	double getSDprice();
	void displayStorageDeviceInfo();
};

