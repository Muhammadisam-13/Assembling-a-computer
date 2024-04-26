#include<iostream>
#include "Case.h"
using namespace std;

void Case::setCaseFF(string str)
{
	formFactor = str;
}
void Case::setCaseColour(string str)
{
	color = str;
}
string Case::getCaseFF()
{
	return formFactor;
}
string Case::getCaseColour()
{
	return color;
}

void Case::displayCase()
{
	cout << "Case " << endl;
	cout << "- Form factor: " << formFactor << endl;
	cout << " - Color: " << color << endl;
}