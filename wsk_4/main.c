#include <stdio.h>
#include <stdlib.h>

struct auto_s{
    char model[10];
    char marka[10];
    float cena;
};

int silnia(int n)
{
    if(n==1) return 1;
    return silnia(n-1)*n;
}

struct auto_s * rezerwuj(int n){
    struct auto_s *wsk=malloc(n*sizeof(struct auto_s));
    return wsk;
}

struct osoba{
    char imie[10];
    char nazwisko[10];
};

void wczytaj(struct auto_s *s){
    scanf("%f",&s->cena);
}

void wypisz(struct auto_s *s){
    printf("%f \n",s->cena);
}

int main()
{
    //int a=6;
    //printf("%d\n",&a);
    printf("%d \n",silnia(3));

    struct auto_s * s1=malloc(sizeof(struct auto_s));
    struct auto_s *pojemnik = rezerwuj(4);
    printf("%d\n",sizeof(struct auto_s));
    (pojemnik+0)->cena=5;
    printf("%d \n",(pojemnik+0)->cena);
    printf("%d \n",pojemnik+1);
    printf("%d \n",pojemnik+3);
    printf("%d \n",pojemnik+4);
    s1->cena=6;
    //printf("%f",s1->cena);
    wczytaj(s1);
    wypisz(s1);
    //printf("%f",s1->cena);
    return 0;
}
