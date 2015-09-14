//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"

//## Function prototypes: ##
int askForX(int);


//## Main: ##
int main()
{
	int innPris[10];
	int utPris[10];
	int lager[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		/*
		printf("pris på vare nr %d:",i+1);
		scanf("%d")
		*/
		innPris[i]= askForX(i);
		
	}
}

int askForX(int x;)
{
	int userInput;
	system("clear");
	printf("tast inn verdi for nr%d:",x);
	scanf("%d",&userInput);
	return userInput;
}
