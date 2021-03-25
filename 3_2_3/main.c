#include <stdio.h>

void zmiana(int *a , int*b)
{
	int p;
	p=*a;
	*a=*b;
	*b=p;
}


int main()
{
	int n=5,m=7;
	printf("%i , %i" , n,m);
	zmiana(&n,&m);
	printf("\n%i , %i" , n,m);
}
