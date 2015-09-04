#include "stdio.h"
#include "stdlib.h"



int main()
{
	
	int variable = 0;
	//int lastdata = 0;

	printf("skriv inn et positivt tall:");
	scanf("%d", &variable);
	int lastdata = variable;
	printf("t");
	while (variable >= 0)
	{
		printf("\nskriv inn et positivt tall (eller negativ for å avsutte):");
		scanf("%d", &variable);
		if (variable<lastdata && variable >=0) 
			{
				lastdata = variable;
			}
		else if (variable < 0) 
			{
				break; //unnecessary but i helped me find an error...
			}
	}
	printf("det minste tallet du skrev var:%d",lastdata);
	
	return 0;
}
