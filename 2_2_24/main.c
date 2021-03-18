#include <stdio.h>

int ciag(int n)
{
	if(n<=1) return 1;
	return n+ciag(n-1);
}

int main()
{
	int n;
	scanf("%i",&n);
	printf("%i",ciag(n));
	return 0;
}
