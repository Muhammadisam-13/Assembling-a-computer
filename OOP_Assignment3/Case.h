#pragma once
#include<iostream>
using namespace std;

class Case
{
protected:
	string formFactor;
	string color;
public:
	Case() : formFactor(""), color("") {}
	Case(string FF, string col) : formFactor(FF), color(col) {}
	void setCaseFF(string str);
	void setCaseColour(string str);
	string getCaseFF();
	string getCaseColour();
	void displayCase();
};

