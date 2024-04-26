#include<iostream>
#include "MotherBoard.h"
using namespace std;

MotherBoard::MotherBoard()
{
	ports = new Port[4]; // set 4 main ports needed, by defalt (there could be more)
	ports[0].setType("Ethernet");
	ports[0].setBaud_rate(300);
	ports[1].setType("HDMI");
	ports[1].setBaud_rate(300);
	ports[2].setType("USB");
	ports[2].setBaud_rate(300);
	ports[3].setType("VGA Port");
	ports[3].setBaud_rate(300);
	mm.setMMcapacity(16);
	mm.setMMtechnologyType("RAM");
}

void MotherBoard::displayPorts()
{
	cout << "-Ports in the motherboard-: " << endl;
	for (int i = 0; i < 4; i++)
	{
		ports[i].getType();
		cout << endl;
	}
}

MotherBoard::~MotherBoard()
{
	delete[] ports;
}




