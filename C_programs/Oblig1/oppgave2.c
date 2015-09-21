//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
//#include "stdlib.h"


void printFunc(char);

int main()
{
	//varables:
	
	
	for(int i=1;i<10;i++)
	{
		for(int x=9;x>i;x--)
		{
			printf(" ");
			
		}
		for(int y=0;y<(i*2)-1;y++)
		{
			printf("%d",i);
		}
		printf("\n",i);
	}
	for(int i=8;i>0;i--)
	{
		for(int x=9;x>i;x--)
		{
			printf(" ");
			
		}
		for(int y=0;y<(i*2)-1;y++)
		{
			printf("%d",i);
		}
		printf("\n",i);
	}
	
}


void printFunc(char x)
{
	
}