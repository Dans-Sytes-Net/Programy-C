#include <stdio.h>
#include <stdlib.h>

struct auto_s{
    char *model;
    char *marka;
    float cena;
};

void wczytaj_s(struct auto_s * s){
    printf("Podaj model: ");
    s->marka=malloc(20*sizeof(char));
    s->model=malloc(20*sizeof(char));
    scanf("%19s",s->model);
    printf("Podaj marke: ");
    scanf("%19s",s->marka);
    printf("Podaj cene: ");
    scanf("%f",&s->cena);
}

void wypisz(struct auto_s * s){
    printf("%s %s %.2f \n\n",s->marka,s->model,s->cena);
}

void najtanszy(struct auto_s * s,float min_cena,int n){
    printf("Ponizej ceny %.2f:\n",min_cena);
    for(int i=0;i<n;i++){
        if((s+i)->cena < min_cena) wypisz((s+i));
    }
}

void wyszukaj_po_marce(struct auto_s *s, char *marka_s,int n){
    printf("Wyszukane po marce %s:\n",marka_s);
    for(int i=0;i<n;i++){
        if(*((s+i)->marka) == *marka_s) wypisz((s+i));
    }
}

int main()
{
    /*struct auto_s *sam1 = malloc(sizeof(struct auto_s));
    wczytaj_s(sam1);
    wypisz(sam1); WPISUJE AUTO DO JEDNEJ STRUKTURY */
    struct auto_s *tab = malloc(2*sizeof(struct auto_s));
    for(int i=0;i<2;i++)
        wczytaj_s(tab+i);
    //for(int i=0;i<2;i++)
        //wypisz(tab+i);
    wyszukaj_po_marce(tab,"Ford",2);
    najtanszy(tab,1500,2);
    return 0;
}
