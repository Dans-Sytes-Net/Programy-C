#include <stdio.h>
#include <stdlib.h>

void tab_2_tab(int n,int tab1[],int tab2[])
{
    for(int i=0;i<n;i++)
        tab2[i]=tab1[i];
}

void reverse_tab_2_tab(int n,int tab1[],int tab2[])
{
    int temp = tab1[0];
    for(int i=0;i<n-1;i++)
        tab2[i] = tab1[n-1-i];
    tab2[n-1]=temp;

}

void wypisz(int n,int tab[])
{
	for(int i=0;i<n;i++)
		printf("%d ",tab[i]);
	printf("\n");
}

int main()
{
    int n=5,tab1[] = {1,2,3,4,5},tab2[] = {12,13,14,15,16};
    wypisz(n,tab1);
    wypisz(n,tab2);
    tab_2_tab(n,tab1,tab2);
    wypisz(n,tab1);
    wypisz(n,tab2);
    reverse_tab_2_tab(n,tab1,tab2);
    wypisz(n,tab1);
    wypisz(n,tab2);
    return 0;
}
