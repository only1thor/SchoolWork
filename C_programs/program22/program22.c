//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"

#define Amount 2


//## Function prototypes: ##
int askForX(int);


//## Main: ##
int main()
{
	int innPris[Amount];
	float utPris[Amount];
	int lager[Amount];
	int i;
	int totalUtsalgPris=0;
	int totalInnkjopsPris=0;
	
	for(i=0;i<Amount;i++)
	{		
		system("clear");
		printf("\nFør inn innkjøpspris for vare");
		innPris[i]= askForX(i);
		printf("\nFør inn antall på lager for vare ");
		lager[i]=askForX(i);
		if(innPris[i]>30)
		{
			utPris[i]=innPris[i]*1.5;
		}
		else
		{
			utPris[i]=innPris[i]*2;
		}
	}
	
	for(i=0;i<Amount;i++)
	{
		printf("\n\n### Vare Nr %d: ###",i+1);
		printf("\ninnkjøpspris:%d \nUtsalgspris: %.2f \nAntall på lager: %d",innPris[i],lager[i],utPris[i]);
		totalInnkjopsPris+=innPris[i];
		totalUtsalgPris+=utPris[i];
	}
	printf("\n\n\n########## SUM #############");
	printf("\ntotal innkjøpspris for hele lageret er: %d\n",totalInnkjopsPris);
	printf("total utsalgspris for hele lageret er:  %d\n",totalUtsalgPris);
	printf("om hele lageret ble solgt ville fortjenesten vert: %d\n",totalUtsalgPris-totalInnkjopsPris);
	
	return 0;
}

int askForX(int x)
{
	int userInput;
	printf(" nr%d:",x+1);
	scanf("%d",&userInput);
	return userInput;
}
