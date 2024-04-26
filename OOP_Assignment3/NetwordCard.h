#pragma once
#include<iostream>
using namespace std;

class NetwordCard
{
protected:
	string type;
	int speed;
	double price;
public:
	NetwordCard() : type("Ethernet NIC"), speed(100), price(20) {}
	NetwordCard(string str);
	void setNCtype(string str);
	void setNCspeed(int s);
	void setNCprice(double p);
	string getNCtype();
	int getNCspeed();
	double getNCprice();
	void displayNCinfo();
};

