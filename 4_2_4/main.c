#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float foo(int n,int tab[])
{
    float temp=1;
    for(int i=0;i<n;i++)
        temp*=tab[i];
    temp=pow(temp,(1/(float)(n)));
    return temp;
}

void wypisz(int n, int tab[])
{
    for(int i=0;i<n;i++)
        printf("%i",tab[i]);
    printf("\n");
}

int main()
{
    int i=5,tab[5];
    for(int i=0;i<5;i++)
    {
        tab[i]=i+1;
    }
    wypisz(i,tab);
    printf("%f",foo(i,tab));
    return 0;
}
