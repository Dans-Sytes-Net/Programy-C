#include <stdio.h>
#include <stdlib.h>

void wartosci(int tab[][100][100])
{
    for(int i=0;i<100;i++){
        for(int o=0;o<100;o++){
            for(int p=0;p<100;p++){
                tab[i][o][p]=0;
            }
        }
    }
}

int suma(int tab[][100][100])
{
    int suma=0;
    for(int i=0;i<100;i++){
        for(int o=0;o<100;o++){
            for(int p=0;p<100;p++){
                suma+=tab[i][o][p];
            }
        }
    }
    return suma;
}

int main()
{
    int tab[100][100][100]; // tablica jest za du¿a przy deklaracji
    wartosci(tab);
    printf("Suma = %d\n",suma(tab));
    return 0;
}
