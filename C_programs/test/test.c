
//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"


void func(int*);

int main()
{
	//setting varables.
	int b=0;
	int *a;
	int A[]={3,5,7,9};
	
	a=&b;
	
	
	/*
	printf("%d\n",a);
	printf("%d\n",*a);
	printf("%d\n",&a);
	printf("%d\n",&b);
	*/
	a = A;
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("peker:%d",&a);
	}
	
	printf("%d\n",*A);
	printf("%d\n",*(A+1));
	printf("%d\n",*(A+2));
	printf("%d\n",*(A+3));
	printf("-------\n");
	
	
	
	
	/*
	*A=13;
	printf("b:%d\n",b);
	printf("*A:%d\n",*A);
	func(&b);
	printf("*A: %d\n",*A);
	printf("b: %d\n",b);
	//printf("%d\n",b);
	*/
	
	return 0;
}

void func(int *x)
{
	*x=99;
	//printf("%d\n",*x);
}
