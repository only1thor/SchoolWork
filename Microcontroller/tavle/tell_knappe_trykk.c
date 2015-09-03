#include "mbed.h"
int lastState;
int teller;
DigitalIn btn(PC_7);


int main()
{
	
	if (btn == 0)
	{
		if (lastState==1)
		{
			teller++;
			lastState=0;
		}
	}
	if (btn==1)
	{
		if (lastState==0)
		{
			lastState=1;
		}
	}
}
