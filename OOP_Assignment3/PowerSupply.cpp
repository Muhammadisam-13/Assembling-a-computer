#include<iostream>
#include "PowerSupply.h"
using namespace std;

void PowerSupply::setPSwattage(int w)
{
	wattage = w;
}
void PowerSupply::setPSefficiencyrating(string str)
{
	efficiencyRating = str;
}
void PowerSupply::setprice(double p)
{
	price = p;
}
int PowerSupply::getPSwattage()
{
	return wattage;
}
string PowerSupply::getPSefficiencyrating()
{
	return efficiencyRating;
}
double PowerSupply::getprice()
{
	return price;
}

void PowerSupply::displayPowerSupplyinfo()
{
	cout << "Power Supply: " << wattage << "W, " << efficiencyRating << endl;
}