#include <stdio.h>
#include <stdlib.h>

union Liczba{
    int a;
    float b;
};

struct Dane{
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj(){
    struct Dane temp;
    printf("1. Liczba calkowita.\n2. Liczba wymierna.\n");
    scanf("%d",&temp.tp);
    if(temp.tp==1){
        printf("Podaj liczbe calowita: ");
        scanf("%d",&temp.zaw.a);
    }
    else{
        printf("Podaj liczbe wymierna: ");
        scanf("%d",&temp.zaw.b);
    }
    return temp;
}

int main()
{
    struct Dane struktura = wczytaj();
    return 0;
}
