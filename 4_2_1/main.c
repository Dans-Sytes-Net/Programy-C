#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zero(int n, int tab[]){
    for(int i=0; i<n; i++){
        tab[i]=0;
    }
}

void fill_index(int n, int tab[])
{
    for(int i=0; i<n; i++){
        tab[i]=i;
    }
}

void double_tab(int n, int tab[])
{
     for(int i=0; i<n; i++){
        tab[i]*=2;
    }
}

void abs_tab(int n,int tab[])
{
    for(int i=0; i<n; i++){
        tab[i]=abs(tab[i]);
    }
}

void wypisz(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}
int main()
{
    int n=5, tab1[]={1,2,3,4,5};
    wypisz(n,tab1);
    zero(n,tab1);
    wypisz(n,tab1);
    fill_index(n,tab1);
    wypisz(n,tab1);
    double_tab(n,tab1);
    wypisz(n,tab1);
    int tab2[] = {-1,-2,-3};
    wypisz(3,tab2);
    abs_tab(3,tab2);
    wypisz(3,tab2);
    return 0;
}
