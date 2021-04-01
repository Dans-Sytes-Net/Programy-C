#include <stdio.h>
#include <stdlib.h>
int silnia(int n)
{
    if(n==0) return 1;
	return silnia(n-1)*n;
}

int main()
{
	int n;
	n=3;
	printf("n!=%d\n", silnia(n));
	n=1;
	printf("n!=%d\n", silnia(n));
	n=0;
	printf("n!=%d\n", silnia(n));
	return 0;
}
