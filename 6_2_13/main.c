#include <stdio.h>
#include <stdlib.h>

void wartosci(int n,int m,int tab[n][m])
{
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            tab[i][o]=o;
        }
    }
}

int suma(int n,int m,int tab[n][m])
{
    int suma=0;
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
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
    int tab[10][10];
    wartosci(10,10,tab);
    wypisz(10,10,tab);
    printf("Suma = %d\n",suma(10,10,tab));
    return 0;
}
