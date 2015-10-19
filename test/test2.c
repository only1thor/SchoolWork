#include "stdio.h"

int main()
	{
		int i=0;
		for (i=0;i<7;i++)
		{
			system("clear");
			system("sleep 1s");
			printf("\nhello world\n");
			wait(2);
			system("sleep 1s");
		}
	}