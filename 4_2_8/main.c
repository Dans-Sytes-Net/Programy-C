#include <stdio.h>
#include <stdlib.h>

void foo(int n , int tab1[],int tab2[] , double tab3[])
{
	int i;
	for(i=0;i<n;i++)
		tab3[i]=(double)tab1[i];
	for(i=n;i<(2*n);i++)
		tab3[i]=(double)tab2[i-5];
}

void foo2(int n , int tab1[],int tab2[] , double tab3[])
{
	int i,elem1=0,elem2=0,temp=1;
	for(i=0;i<n;i++)
	{
		if(temp%2==0)
		{
			tab3[i]=(double)tab2[elem1];
			elem1++;
		}
		else
		{
			tab3[i]=(double)tab1[elem2];
			elem2++;
		}
		temp++;
	}
}

void wypisz_int(int n,int tab[])
{
	for(int i=0;i<n;i++)
		printf("%d ",tab[i]);
	printf("\n");
}
void wypisz_double(int n,double tab[])
{
	for(int i=0;i<n;i++)
		printf("%.2lf ",tab[i]);
	printf("\n");
}

int main()
{
	int tab1[] = {1,2,3,4,5} , tab2[] = {0,9,7,6,5};
	double tab3[10];
	foo(5,tab1,tab2,tab3);
	wypisz_int(5,tab1);
	wypisz_int(5,tab2);
	wypisz_double(10,tab3);
	foo2(10,tab1,tab2,tab3);
    wypisz_int(5,tab1);
	wypisz_int(5,tab2);
	wypisz_double(10,tab3);
	return 0;
}
