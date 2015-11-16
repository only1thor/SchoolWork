//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"

//function prototypes:
void Utskrift(int *,int);



int main()
{
	int flaskeType[5];={0};
	int input=0;
	do 
	{
	    printf("\nTast inn flaskeType(1-5):");
	    scanf("%d",&input);
	    flaskeType[input-1]+=1;
	} while(input>0);
	Utskrift(flaskeType,5);
	return 0;
}


//functions:

void Utskrift(int table[],int a) //table is the input table, a is the length to read from the table.
{
	system("clear");
	int totalAmmount=0;
	float sumTotal=0;
	float tempSum=0;
	int i=0;
	for(i=0;i<a;i++)
	{
		int x=0;
		if (i<2){x=1;}
		else {x=2;}
		totalAmmount+=table[i];
		tempSum=table[i]*x;
		sumTotal+=tempSum;
		printf("Antall flasker av type %d :%d gir kr: %.2f\n",i+1,table[i],tempSum);
	}
	for(i=0;i<30;i++){printf("-");}
	printf("\nTOTAL %d flasker gir kr:%.2f",totalAmmount,sumTotal);
}