#include <stdio.h>
#include <math.h>

int pierwiastek(int n , int m)
{
	if(n==0) return 0;
	return pow(n , 1/m);
}

int suma(int n , int m)
{
	int wynik,i;
	for(i=0;i<=n;i++)
	{
		wynik+=pierwiastek(i,m);
	}
	return wynik;
}

int main()
{
	int n,m;
	scanf("%i %i",&n,&m);
	if(m<=1) return 0;
	printf("%i" , suma(n,m));
}
