#include <stdio.h>
#include <stdlib.h>

struct temperatura{
    int miesiac;
    int dzien;
    float temp;
};

float oblicz_srednia_temperatur(int n,struct temperatura *tab,int miesiac)
{
    float suma=0;
    float ile=0;
    for(int i=0;i<n;i++){
        if((tab+i)->miesiac == miesiac){
            suma+= (tab+i)->temp;
            ile++;
        }
    }
    return suma/ile;
}

struct temperatura * wczytaj(){
    struct temperatura t = malloc(sizeof(struct temperatura));
    printf("Podaj dzien:");
    scanf("%d",&t->dzien);
    printf("\nPodaj miesiac:");
    scanf("%d",&t->miesiac);
    printf("\nPodaj temperature:");
    scanf("%f",&t->temp);
    return t;
}

struct temperatura * wczytaj_tab(struct temperatura *t1,struct temperatura *t2,struct temperatura *t3){
    struct temperatura tab[3] = {t1,t2,t3};
    return tab;
}

int main()
{
    struct temperatura *t1 = wczytaj();
    struct temperatura *t2 = wczytaj();
    struct temperatura *t3 = wczytaj();
    struct temperatura *tab = wczytaj_tab(t1,t2,t3);
    return 0;
}
