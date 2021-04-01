#include <stdio.h>
#include <stdlib.h>

void wypisz(int n,int tab[])
{
	int i;
	for(i=0;i<n;i++)
		printf("%i",tab[i]);
	printf("\n");
}

void reverse(int n,int tab[])
{
	int temp[n],i,o=0;
	for(i=n-1;i>=0;i--)
	{
		temp[o]=tab[i];
		o++;
	}
	for(i=0;i<n;i++)
		tab[i]=temp[i];
}

void move_left(int n,int tab[])
{
	int temp[n],i,o=0;
	temp[n-1] = tab[0];
	for(i=1;i<n;i++)
	{
		temp[o]=tab[i];
		o++;
	}
	for(i=0;i<n;i++)
		tab[i]=temp[i];
}
void move_right(int n,int tab[])
{
	int temp[n],i,o=1;
	temp[0]=tab[n-1];
	for(i=1;i<n;i++)
	{
		temp[o]=tab[i-1];
		o++;
	}
	for(i=0;i<n;i++)
		tab[i]=temp[i];
}


void asc(int n,int tab[])
{
	int i,v,j;
  	for ( i = 1; i < n; i++ )
  	{
		v = tab[i];
    	for ( j = i; (j > 0) && (tab[j-1] > v) ; j-- )
    	tab[j] = tab[j-1];
    	tab[j] = v;
  	}
  	wypisz(n,tab);
}

void desc(int n,int tab[])
{
	int i,v,j;
  	for ( i = 1; i < n; i++ )
  	{
		v = tab[i];
    	for ( j = i; (j > 0) && (tab[j-1] < v) ; j-- )
    	tab[j] = tab[j-1];
    	tab[j] = v;
  	}
  	wypisz(n,tab);
}

int main()
{
	int tab[] = {1,3,2,4,5};
	reverse(5,tab);
	wypisz(5,tab);
	move_left(5,tab);
	wypisz(5,tab);
	move_right(5,tab);
	wypisz(5,tab);
	asc(5,tab);
	desc(5,tab);
	return 0;
}
