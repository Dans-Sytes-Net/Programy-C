#include <stdio.h>
#include <stdlib.h>

void zeruj(int tab[][100],int n)
{
    for(int i=0;i<n;i++){
        for(int o=0;o<100;o++){
            tab[i][o]=0;
        }
    }
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
    zeruj(tab,100);
    wypisz(100,100,tab);
    return 0;
}
