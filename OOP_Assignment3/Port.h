#pragma once
#include<iostream>
using namespace std;
class Port
{
protected:
	string type; // (Possible values: VGA Port,I/O Port,USB Port,HDMI Port etc)
	int baud_rate;
public:
	Port() : type(""), baud_rate(300) {}
	Port(string str, int rate) : type(str), baud_rate(rate) {}
	void setType(string str);
	void setBaud_rate(int r);
	string getType();
	int getBaud_rate();
};

