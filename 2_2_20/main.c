#include <stdio.h>

int silnia(int n)
{
	if(n<2) return 1;
	return n*silnia(n-1);
}

int main()
{
	int n;
	scanf("%i" , &n);
	printf("n!=%i", silnia(n));
	return 0;
}
