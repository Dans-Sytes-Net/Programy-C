#include <stdio.h>
#include <stdlib.h>

struct student{
    char imie[10];
    char *nazwisko;
    char *adres;
    double pesel;
    char *kierunek;
    int nr_legitymacji;
};

void wypisz_student(struct student *s){
    printf("%s %s %s %.0lf %s %d",s->imie,s->nazwisko,s->adres,s->pesel,s->kierunek,s->nr_legitymacji);
}

void wpisz(struct student *s){
    printf("Imie: ");
    scanf("%s",&(s->imie));
    /*printf("\nNazwisko: ");
    scanf("%s",&(s->nazwisko));
    printf("\nAdres: ");
    scanf("%s",&(s->adres));
    printf("\nKierunek: ");
    scanf("%s",&(s->kierunek));
    printf("\nNr legitymacji: ");
    scanf("%d",&(s->nr_legitymacji));
    printf("\nPesel: ");
    scanf("%lf",&(s->pesel));*/
}

int main()
{
    struct student *s = malloc(sizeof(struct student));
    wpisz(s);
    wypisz_student(s);
    return 0;
}
