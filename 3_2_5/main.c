#include <stdio.h>

int fun(const int *a ,const int *b)
{
	return *a+*b;
}

int main()
{
	int a=2,b=2;
	int c=3,d=3;
	printf("%i",fun(&a,&b));
	printf("%i",fun(&c,&d));
	return 0;
}
