#include <stdio.h>
#include <stdlib.h>

struct pkt10{
    double tab_pkt[10];
};

void przepisz(struct pkt10 p1,struct pkt10 *p2)
{
    for(int i=0;i<10;i++)
    {
        p2->tab_pkt[i] = p1.tab_pkt[i];
    }
}

void wypisz(double p[]){
    for(int i=0;i<10;i++){
        printf("%lf " , p[i]);
    }
    printf("\n");
}

int main()
{
    struct pkt10 p1 = {.tab_pkt = {0,1,2,3,4,5,6,7,8,9}};
    struct pkt10 p2 = {.tab_pkt = {9,8,7,6,5,4,3,2,1,0}};
    wypisz(p1.tab_pkt);
    wypisz(p2.tab_pkt);
    przepisz(p1,&p2);
    wypisz(p1.tab_pkt);
    wypisz(p2.tab_pkt);
    return 0;
}
