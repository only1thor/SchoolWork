//written by Tcuc (Thor Christan Cusick).
#include "stdio.h"
#include "stdlib.h"

#define N 5

int main()
{
    int Tabell[N]={0};
    int num=0;
    int plass=0;
    
    printf("\nThis program finds the smallest of %d numbers.\n",N);
    for(int i=0;i<N;i++)
    {
        printf("now, fill in number %d of %d:",i+1,N);
        scanf(" %d",&Tabell[i]);
    }
    num=Tabell[0];
    for(int i=1;i<N;i++)
    {
        if(num>Tabell[i])
        {num=Tabell[i];plass=i;}
    }
    printf("\nsmallest num:%d, at place:%d",num,plass+1);
}