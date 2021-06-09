#include <stdio.h>
#include <stdlib.h>

void maxim(int n,int tab[n][n]){
    int max_suma=0, kol=-1;
    for(int i=0;i<n;i++){
        int suma=0;
        for(int o=0;o<n;o++){
            suma+=tab[o][i];
        }
        if(suma>max_suma){
            max_suma=suma;
            kol=i;
        }
    }
    printf("kol: %d , suma=%d\n",kol,max_suma);
}

void wczytaj(int n,int tab[n][n]){
    for(int i=0;i<n;i++){
        for(int o=0;o<n;o++)
        {
            scanf("%d",&tab[i][o]);
        }
    }
}

int main()
{
    int n=0; // deklaracja liczby ca³kowitej n
    while(n<=10){ // pêtla sprawdzaj¹ca warunek czy wpsiano poprawene n
        printf("Podaj liczbe n:"); // komunikat o podanie liczby
        scanf("%d",&n); // wprowadzanie liczby n
        if(n<=10) printf("Zla liczba!\n"); // warunek sprawdzaj¹cy poprawnoœæ liczby n
    }
    int tab[n][n];
    wczytaj(n,tab);
    maxim(n,tab);
    return 0;
}
