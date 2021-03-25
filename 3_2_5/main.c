#include <stdio.h>

int fun(int *a , int *b)
{
	return *a+*b;
}

int main()
{
	const int a=2,b=2;
	printf("%i",fun(&a,&b));
}
