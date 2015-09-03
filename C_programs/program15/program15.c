#include "stdio.h"
#include "stdlib.h"

int main()
{
int i; //i blir ofte brukt som tellervariabel
int multiplikator = 2;
int topptabell=2;

char svar='j';
	while(svar =='j' || svar =='J')
		{
			printf("til hvilken tabell vil du ha?");
			scanf("%d", &topptabell);
			getchar(); //Fjerner linjeskift
			for(multiplikator;multiplikator<=topptabell;multiplikator++)
			{
			for ( i =1; i<=10; i++) {printf("\n %d * %d = %d",i,multiplikator,i*multiplikator);}
			// Den linjen ovenfor sørger for at du får en multiplikasjonstabell
			printf("\n-----------------------------------------------	");
			}
			printf("\nSkal jeg skrive ut til en annen tabellen ?");
			scanf( " %c", &svar );
			getchar( ); //Fjerner linjeskift
			multiplikator=0;
			
		} 
return 0;
}