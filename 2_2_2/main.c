#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int silnia(int n)
{
    if(n==1) return 1;
	return silnia(n-1)*n;
}

int silnia(int n)
{
	int i,wynik=1;
	for(i=n;i>=1;i--)
	{
		wynik*=i;
	}
	return wynik;
}


int main()
{
	int n;
	scanf("%i" , &n);
	printf("n!=%i\n", silnia(n));
	//printf("%i", sizeof(int));
	return 0;
}
