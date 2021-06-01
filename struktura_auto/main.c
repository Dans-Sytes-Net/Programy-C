#include <stdio.h>
#include <stdlib.h>

struct auto_s{
    char model[20];
    char marka[20];
    float cena;
};

void wczytaj_s(struct auto_s * s){
    printf("Podaj model: ");
    scanf("%s",&s->model);
    printf("Podaj marke: ");
    scanf("%s",&s->marka);
    printf("Podaj cene: ");
    scanf("%f",&s->cena);
}

void najtanszy(struct auto_s * s,float min_cena,int n){
    printf("Ponizej ceny %.2f:\n",min_cena);
    for(int i=0;i<n;i++){
        if((s+i)->cena < min_cena) wypisz((s+i));
    }
}

void wyszukaj_po_marce(struct auto_s *s, char *marka,int n){
    printf("Wyszukane po marce %s:\n",marka);
    for(int i=0;i<n;i++){
        if((s+i)->marka == marka) wypisz((s+i)); // Problem z porównaniem dwóch napisów
    }
}

void wypisz(struct auto_s * s){
    printf("%s %s %.2f \n\n",s->marka,s->model,s->cena);
}

int main()
{
    struct auto_s *sam1 = malloc(sizeof(struct auto_s));
    wczytaj_s(sam1);
    wypisz(sam1);
    struct auto_s *tab = malloc(2*sizeof(struct auto_s));
    for(int i=0;i<2;i++)
        wczytaj_s(tab+i);
    //for(int i=0;i<2;i++)
        //wypisz(tab+i);
    wyszukaj_po_marce(tab,"Ford",2);
    najtanszy(tab,1500,2);
    return 0;
}
