#include <stdio.h>
#include <stdlib.h>

struct pracownik{
    char *imie;
    char *nazwisko;
    int rok_urodzenia;
};

int najmlodszy(struct pracownik * tab,int n){
    int rok = tab->rok_urodzenia;
    for(int i=0;i<n;i++){
        if((tab+i)->rok_urodzenia > rok){
            rok= (tab+i)->rok_urodzenia;
        }
    }
    return rok;
}

int main()
{
    struct pracownik p1 = {.rok_urodzenia=1999};
    struct pracownik p2 = {.rok_urodzenia=1989};
    struct pracownik p3 = {.rok_urodzenia=2000};
    struct pracownik tab[] = {p1,p2,p3};
    printf("%d \n",najmlodszy(tab,3));
    return 0;
}
