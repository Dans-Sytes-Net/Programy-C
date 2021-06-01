#include <stdio.h>
#include <stdlib.h>

int ** rezerwuj(int n,int m){
    int **kolumna_wsk = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        *(kolumna_wsk+i) = malloc(m*sizeof(int));
    }
    return kolumna_wsk;
}

void zero(int n, int m, int **wsk)
{
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            *(*(wsk+o)+i)=o;
        }
    }
}

void wypisz(int n,int m,int **wsk){
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            printf("%d ",*(*(wsk+o)+i));
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            printf("%d|%d = %d \n",i,o,*(*(wsk+o)+i));
        }
    }
}

int main()
{
    int **tab = (int**) rezerwuj(5,5);
    zero(5,5,tab);
    wypisz(5,5,tab);
    return 0;
}
