#include "mbed.h"

BusOut leds(PA_9,PC_7,PB_6,PA_7,PA_6,PA_5,PB_5,PB_4);

int main()
{
	//set the leds to hex:FA, "~" inverts since the leds are active low.   
	leds=~0xFA;
}
