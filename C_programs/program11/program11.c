#include "stdio.h"
#include "stdlib.h"

float belop=0;
float rente=0;
int aar=0;

int main()
{
	printf("\nTast inn beløp:");
	scanf("%f",&belop);
	printf("\nTast inn rente:");
	scanf("%f",&rente);
	printf("\nTast inn antall år:");
	scanf("%d",&aar);
	for(int i=0;i<aar;i++)
		{
			belop*=1+rente;
		}
	printf("summer etter %d år er:",aar);
	printf("%.2f kr",belop);
}