#include <stdio.h>
#include <stdlib.h>

struct Sportowiec{
    char imie[10];
    char kraj[10];
    float rekord;
};

float avg(int n, struct Sportowiec *tab){
    float suma=0;
    for(int i=0;i<n;i++){
        suma+=(tab+i)->rekord;
    }
    return suma/n;
}

int main()
{
    struct Sportowiec s1,s2,s3;
    struct Sportowiec tab[3];
    s1.rekord=5.5;
    s2.rekord=2.35;
    s3.rekord=0.99;
    tab[0] = s1;
    tab[1] = s2;
    tab[2] = s3;
    printf("%f",avg(3,tab));
    return 0;
}
