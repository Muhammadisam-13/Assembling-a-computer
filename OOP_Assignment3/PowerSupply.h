#pragma once
#include<iostream>
using namespace std;

class PowerSupply
{
protected:
	int wattage;
	string efficiencyRating; // (80 Plus Bronze, 80 Plus Gold)
	double price;
public:
	PowerSupply() : wattage(300), efficiencyRating("80 PLUS Gold"), price(50) {}
	PowerSupply(int w, string str, double p) : wattage(w), efficiencyRating(str), price(p) {}
	void setPSwattage(int w);
	void setPSefficiencyrating(string str);
	void setprice(double p);
	int getPSwattage();
	string getPSefficiencyrating();
	double getprice();	
	void displayPowerSupplyinfo();
};

