#include "stdio.h"

//Function prototypes:
void printTable(int*);

int main()
	{
		int i[]={3,4,8};
		printTable(i);
		/*
		for (i=0;i<7;i++)
		{
			system("clear");
			system("sleep 1s");
			printf("\nhello world\n");
			wait(2);
			system("sleep 1s");
		}
		*/
	}
	
	void printTable(int table[])
	{
		int i=0;
		for (i=0;i<3;i++)
		{
			printf("nr %d\n",table[i]);
		}
	}