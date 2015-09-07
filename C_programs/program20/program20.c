//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"

float const Pi=3.14159;

float arealAvSirkel(float);
float celsiusTilFarenheit(float);


 
int main()
{
	int x=0;
	float inputVal=0;
	int input=0;
	//--------------
	printf("\ntast tallet for dit valg: \n1. Areal av sirkel \n2. celsius til farenheit \nalt annet er avslutt.");
	scanf("%d",input);
	switch (input)
	{
		case 1 :
		printf("\nGi radius av en sirkel, få areal:");
		scanf("%f",&inputVal);
		printf("Arealet er %f.",arealAvSirkel(inputVal));	
		break;
		
		case 2 :
		printf("\nGi celsius, få farenheit:");
		scanf("%f",&inputVal);
		printf("%f celsius er %f farenheit.",inputVal,celsiusTilFarenheit(inputVal));
		
		default:
		break;
	}
	
	return 0;
}

float arealAvSirkel(float radius)
{
	float svar=0;
	svar=radius*radius*Pi;
	return svar;
}

float celsiusTilFarenheit(float temp)
{
	float farenheit=0;
	farenheit=32+(temp*(9.0/5.0));
	return farenheit;
}