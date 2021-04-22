#include <stdio.h>
#include <stdlib.h>

void zeruj(int n,int m,int tab[n][m])
{
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
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
    int tab[10][10];
    zeruj(10,10,tab);
    wypisz(10,10,tab);
    return 0;
}
