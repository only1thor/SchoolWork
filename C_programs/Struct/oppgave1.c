//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"

int main()
{
	struct lonnMotaker
	{
	    char name[80];
	    float arslonn;
	}person; 

printf("navn:\n");
scanf(" %s", &person.name[0]);

printf("aarslonn:\n");
scanf(" %f", &person.arslonn);

printf("\n\n%s tener: %f kr. i året",person.name,person.arslonn);
}