//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"

float const Pi=3.14159;

float arealAvSirkel(float);
float celsiusTilFarenheit(float);
float postBeregning(char);


 
int main()
{
	int input=0;
	char post;
	float inputVal=0;
	float x=1.0;
	//--------------
	printf("\ntast tallet for dit valg: \n"); 
	printf("1.Areal av sirkel \n"); 
	printf("2.celsius til farenheit \n");
	printf("3.Beregning av post (A-post/B-post).\n");
	printf("Alt annet er avslutt.\n");
	scanf("%d",&input);
	
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
		break;
		
		case 3 :
		printf("\nskal du sende A eller B post?:");
		getchar();
		scanf("%c",&post);
		x=postBeregning(post);
		if(x!=0.0)
		printf("Din pakke vil koste: %.2f kr",x);
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

float postBeregning(char inpt)
{
	int vekt=0;
	float pris=0.0;
	
	if(inpt!='A'||inpt!='a'||inpt!='B'||inpt!='b')
	{
		printf("ugyldig posttype!('A' for A-post 'B' for B-post)\n");
	}
	else
	{
		printf("\nhva veier pakken? (i gram):");
		scanf("%d",&vekt);
		
		if (inpt=='A'||inpt=='a')
		{
			if(vekt<=20)
				pris=4.20;
			else if(vekt<=50)
				pris=6.3;
			else if(vekt<=100)
				pris=8.0;
			else if(vekt<=250)
				pris=15.0;
			else if(vekt<=500)
				pris=26.5;
			else
				pris=42.0;
		}
		else if(inpt=='B'||inpt=='b')
		{
			if(vekt<=20)
				pris=3.6;
			else if(vekt<=50)
				pris=5.4;
			else if(vekt<=100)
				pris=7.0;
			else if(vekt<=250)
				pris=12.0;
			else if(vekt<=500)
				pris=22.5;
			else
				pris=35.0;
		}
		else
		
		return pris;
	}
}
