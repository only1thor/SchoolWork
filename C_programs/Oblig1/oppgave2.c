//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
int main()
{	
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