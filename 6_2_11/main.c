#include <stdio.h>
#include <stdlib.h>

void wartosci(int tab[][100],int n)
{
    for(int i=0;i<n;i++){
        for(int o=0;o<100;o++){
            tab[i][o]=o;
        }
    }
}

int suma(int tab[][100],int n)
{
    int suma=0;
    for(int i=0;i<n;i++){
        for(int o=0;o<100;o++){
            suma+=tab[i][o];
        }
    }
    return suma;
}

void wypisz(int n,int m,int tab[n][m])
{
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            printf("%d ",tab[i][o]);
        }
        printf("\n");
    }
}

int main()
{
    int tab[100][100];
    wartosci(tab,100);
    wypisz(100,100,tab);
    printf("Suma = %d\n",suma(tab,100));
    return 0;
}
