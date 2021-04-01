#include <stdio.h>
#include <stdlib.h>

void sum_to_tab3(int n,int tab1[],int tab2[],int tab3[])
{
    for(int i=0;i<n;i++)
        tab3[i]=tab1[i]+tab2[i];
}

int max(int a,int b)
{
    return (a>b?a:b);
}

void max_tab(int n,int tab1[],int tab2[],int tab3[])
{
    for(int i=0;i<n;i++)
        tab3[i]=max(tab1[i],tab2[i]);
}

void move(int n , int tab1[],int tab2[],int tab3[])
{
    int temp_tab[n];
    for(int i=0;i<n;i++)
        temp_tab[i] = tab3[i];
    for(int i=0;i<n;i++)
        tab3[i]=tab2[i];
    for(int i=0;i<n;i++)
        tab2[i]=tab1[i];
    for(int i=0;i<n;i++)
        tab1[i]=temp_tab[i];
}

void wypisz(int n,int tab[])
{
	for(int i=0;i<n;i++)
		printf("%d ",tab[i]);
	printf("\n");
}

int main()
{
    int n=5, tab1[]={1,2,3,4,5},tab2[]={6,7,8,9,10},tab3[]={11,12,13,14,15};
    wypisz(n,tab1);
    wypisz(n,tab2);
    wypisz(n,tab3);
    printf("\n");
    sum_to_tab3(n,tab1,tab2,tab3);
    wypisz(n,tab1);
    wypisz(n,tab2);
    wypisz(n,tab3);
    printf("\n");
    max_tab(n,tab1,tab2,tab3);
    wypisz(n,tab1);
    wypisz(n,tab2);
    wypisz(n,tab3);
    printf("\n");
    int tab4[]={1,2,3,4,5},tab5[]={6,7,8,9,10},tab6[]={11,12,13,14,15};
    move(n,tab4,tab5,tab6);
    wypisz(n,tab4);
    wypisz(n,tab5);
    wypisz(n,tab6);
    return 0;
}
