#include "stdio.h"
#include "stdlib.h"

int main()
{
int i;
/* i blir ofte brukt som tellervariabel */
int multiplikator = 2;
char svar='j';
	while(svar =='j' || svar =='J')
		{
			printf("hvilken tabell vil du ha?");
			scanf(" %d", &multiplikator);
			getchar(); //Fjerner linjeskift
			for ( i =1; i<=10; i++) {printf("\n %d * %d = %d",i,multiplikator,i*multiplikator);}
			// De to linjene ovenfor sørger for at du får en multiplikasjonstabell
			printf("\nSkal jeg skrive ut en annen tabellen ?");
			scanf( " %c", &svar );
			getchar( ); //Fjerner linjeskift
			//multiplikator++;
			
		} 
return 0;
}