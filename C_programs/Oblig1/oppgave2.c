//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
//#include "stdlib.h"


void printFunc(char); //unsed function
void lineF(int);	//Print 1 line. (includes spaces and numbers).

int main()
{
	//varables:
	
	
	for(int i=1;i<10;i++)
	{
		lineF(i);
	}
	for(int i=8;i>0;i--)
	{
		lineF(i);
	}
	
}

void lineF(int i)
{
	for(int x=9;x>i;x--) //prints the inverse amount of the vaiable "i". (passed to the function by main for loop)
		{
			printf(" ");
			
		}
		for(int y=0;y<(i*2)-1;y++)
		{
			printf("%d",i);
		}
		printf("\n");
}


//unsed function
void printFunc(char x)
{
	
}