#include <stdio.h>
#include <stdlib.h>

int foo_a(int n, int tab[])
{
    for(int i=0;i<n;i++)
        tab[i]=0;
    return tab;
}

int foo_b(int n, int tab[])
{
    for(int i=0;i<n;i++)
        tab[i]=i;
    return tab;
}

int foo_c(int n, int tab[])
{
    for(int i=0;i<n;i++)
        tab[i]*=2;
    return tab;
}

int foo_d(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        if(tab[i]<0) tab[i]*=(-1);
    }
    return tab;
}

void wypisz(int n, int tab[])
{
    for(int i=0;i<n;i++)
        printf("%i",tab[i]);
    printf("\n");
}

int main()
{
    int n=5;
    int tab[5];
    foo_a(n,tab);
    wypisz(n,tab);
    foo_b(n,tab);
    wypisz(n,tab);
    foo_c(n,tab);
    wypisz(n,tab);
    foo_d(n,tab);
    wypisz(n,tab);
    return 0;
}
