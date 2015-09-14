//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"

// ######## Constants ##########
#define Verdi 4


//#### Function prototypes: ################
int askForAge(void);





// ########### Main ##############
int main()
{
	int alder[Verdi];
	char userInput;
	float gjennomsnitt;
	int i=0;
	for (i=0;i<Verdi;i++)
	{
		alder[i]=askForAge();
	}
	

	do
	{
		int nr=0;
		int nyAlder=0;
		
		//her kan man endre aldere i tabellen. 
		if(userInput=='j')
		{
			system("clear");
			printf("\nhvilken av alderene i rekken vil du endre? ");
			printf("\nskriv inn [nr i rekken],[ny alder]");
			printf("\nInput:");
			
			scanf("%d,%d",&nr,&nyAlder);
			alder[nr-1] = nyAlder;
		}
		
		// Gjennomsnitt beregning.
		gjennomsnitt=0; //nullstiller så gjennomsnitt blir riktig.
		for(i=0;i<Verdi;i++)
		{
			gjennomsnitt+=alder[i]; 
		}
		gjennomsnitt = gjennomsnitt/Verdi;
		
		
		printf("\ngjennomsnitt alderen er:%.1f år",gjennomsnitt);
		printf("\nvil du endre alderen til noen i listen?");
		printf("\ntast j for ja, og n for nei:");
		getchar();
		scanf("%c",&userInput);
		
	}while(userInput=='j');
	
	return 0;
}

int askForAge()
{
	int userInput;
	system("clear");
	printf("tast inn alder:");
	scanf("%d",&userInput);
	return userInput;
}
