#include <stdio.h>
#include <stdlib.h>

int suma_ciagu(int dlugosc,int liczba, int roznica)
{
    int suma=liczba;
    for(int i=1;i<dlugosc;i++)
        suma+=roznica;
    return suma;
}

int main()
{
    /*int suma_ciagu=0;
    for(int i=1;i<=10;i++)
        suma_ciagu+=i;
    printf("%d",suma_ciagu);*/
    printf("%d\n",suma_ciagu(10,2,2)); //55
    printf("\n");
    int o=1;
    while(o<=30)
    {
        if(o>=10 && o<=20) printf("%d ",o);
        o++;
    }
    printf("\n");
    int p=1;
    do{
        printf("%d ",p);
        p++;
    }while(p<=10);
    printf("\n");
    return 0;
}
