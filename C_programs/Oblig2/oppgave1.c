//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"


//Prototypes:
void informasjon(void);
float beregn_bmi(float,float);


int main()
{
	float hoyde=0;
	float vekt=0;
	printf("Tast inn vekt i Kg:\n");
	scanf("%f",&vekt);
	printf("Tast inn høyde i meter:\n");
	scanf("%f",&hoyde);
	printf("BMI:%.3f\n",beregn_bmi(vekt,hoyde));
	return 0;
}

void informasjon(void)
{
    printf("Dette programmet skal regne ut BMI\n");
    printf("Før inn dine data.\n");
}

float beregn_bmi(float v,float h)
{
    return (v/(h*h));
}