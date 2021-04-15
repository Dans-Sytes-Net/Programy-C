#include <stdio.h>
#include <stdlib.h>

int max(int a,int b,int c)
{
    int max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    return max;
}

void max_tab(int n,int tab1[],int tab2[],int tab3[])
{
    int temp_tab[n];
    for(int i = 0 ; i<n;i++){
        //temp_tab[i] = tab1[i];
        temp_tab[i]=max(tab1[i],tab2[i],tab3[i]);
    }
    wypisz(n,temp_tab);
}

void wypisz(int n,int tab[])
{
	for(int i=0;i<n;i++)
		printf("%d ",tab[i]);
	printf("\n");
}

int main()
{
    int n=5, tab1[]={1,2,3,4,5},tab2[]={6,7,8,9,10},tab3[]= {11,12,13,14,15};

    max_tab(n,tab1,tab2,tab3);
    max_tab(n,tab2,tab1,tab3);
    max_tab(n,tab3,tab2,tab1);
    //wypisz(n,max_tab(n,tab1,tab2,tab3));
    return 0;
}
