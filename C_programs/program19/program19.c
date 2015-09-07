//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"

float const Pi=3.14159;

float arealAvSirkel(float);


 
int main()
{
	int x=0;
	float input=0;
	printf("\nGi radius av en sirkel, få areal:");
	scanf("%f",&input);
	printf("Arealet er %f.",arealAvSirkel(input));
}

float arealAvSirkel(float radius)
{
	float svar=0;
	svar=radius*radius*Pi;
	return svar;
}