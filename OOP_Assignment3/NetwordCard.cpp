#include<iostream>
#include "NetwordCard.h"
using namespace std;

NetwordCard::NetwordCard(string str)
{
	type = str;
	price = 20.0;
	speed = 100;
}
void NetwordCard::setNCtype(string str)
{
	type = str;
}
void NetwordCard::setNCspeed(int s)
{
	speed = s;
}
void NetwordCard::setNCprice(double p)
{
	price = p;
}
string NetwordCard::getNCtype()
{
	return type;
}
int NetwordCard::getNCspeed()
{
	return speed;
}
double NetwordCard::getNCprice()
{
	return price;
}

void NetwordCard::displayNCinfo()
{
	cout << "Netword Card " << endl;
	cout << " - Type: " << type << endl;
	cout << " - Speed: " << speed << "Mbps" << endl;
	cout << " - Price: $" << price << endl;
}