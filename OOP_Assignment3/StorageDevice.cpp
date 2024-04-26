#include<iostream>
#include "StorageDevice.h"
using namespace std;

void StorageDevice::setSDtype(string str)
{
	type = str;
}
void StorageDevice::setSDcapacity(int c)
{
	capacity = c;
}
void StorageDevice::setSDprice(double p)
{
	price = p;
}
string StorageDevice::getSDtype()
{
	return type;
}
int StorageDevice::getSDcapacity()
{
	return capacity;
}
double StorageDevice::getSDprice()
{
	return price;
}

void StorageDevice::displayStorageDeviceInfo()
{
	cout << "Storage Device: " << endl;
	cout << " - Type: " << type << endl;
	cout << " - Capacity: " << capacity;
	capacity == 1 ? cout << "TB" : cout << "GB";
	cout << endl;
	cout << " - Price: $" << price << endl;
}