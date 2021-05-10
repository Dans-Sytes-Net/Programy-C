#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    int a,b,c;
};

struct prosokat{
    int a,b;
};

struct osoba{
    char *imie;
    char *nazwisko;
    int wiek;
    int rok;
    int miesiac;
    int dzien;
};

void wypisz_dane_os(struct osoba o)
{
    printf("%s %s wiek: %d\n",o.imie,o.nazwisko,o.wiek);
}

void policz_wiek(struct osoba *o,int rok){
    o->wiek = rok-o->rok;
}

int suma_str(struct trojkat st1){
    return st1.a + st1.b;
}

int pole_prost(struct prosokat p){
    return p.a*p.b;
}

int main()
{
    struct trojkat t1 = {.a=5 , .b =6 , .c =7};
    struct prosokat kwadrat = {.a=5,.b=5};
    struct prosokat p1 = {.a=2,.b=3};
    //printf("%d\n",pole_prost(kwadrat));
    //printf("%d\n",pole_prost(p1));
    struct osoba o1;
    struct osoba o2;
    struct osoba o3;

    int * zmienna = malloc(sizeof(int));
    printf("%p\n", zmienna);
    *zmienna = 5;
    printf("%d\n", *zmienna);


    o1.imie = "Daniel";
    o1.nazwisko = "Kuch";
    o1.rok=1999;

    o2.imie = "Adam";
    o2.nazwisko = "Kuch";
    o2.wiek = 16;

    o3.imie = "Piotr";
    o3.nazwisko = "Kuch";
    o3.wiek = 77;

    policz_wiek(&o1,2021);
    //wypisz_dane_os(o1);
    //wypisz_dane_os(o2);
    //wypisz_dane_os(o3);

    //printf("%d %p\n",sizeof(&t1),&t1);
    //printf("%d %p\n",sizeof(t1),t1);
    //printf("%d %p\n",sizeof(&t1.a),&t1.a);
    //printf("%d %d\n",sizeof(&t1.b),&t1.b);
    //printf("%d %d\n",sizeof(&t1.c),&t1.c);

    //printf("%d\n",t1.a + t1.b);
    //printf("%d\n",suma_str(t1));
    return 0;
}
