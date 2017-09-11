#include "stdio.h"
#include "stdlib.h"
int main()
{
	int variable = 0;
	int lastdata = 32767;//largest possible positive int.
	do
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
	}while (variable >= 0)
	printf("det minste tallet du skrev var:%d",lastdata);
	return 0;
}
