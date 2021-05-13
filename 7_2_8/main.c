#include <stdio.h>
#include <stdlib.h>

struct student{
    char *imie;
    char *nazwisko;
    char *adres;
    double pesel;
    char *kierunek;
    int nr_legitymacji;
};

void wypisz_student(struct student *s){
    printf("%s %s %s %.0lf %s %d",s->imie,s->nazwisko,s->adres,s->pesel,s->kierunek,s->nr_legitymacji);
}

int main()
{
    struct student s = {.imie="Daniel",.nazwisko="Kucharski",.adres="Polska 21",.pesel=11111111111,.kierunek="IO",.nr_legitymacji=443456};
    wypisz_student(&s);
    return 0;
}
