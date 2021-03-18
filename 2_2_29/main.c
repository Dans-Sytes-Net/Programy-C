#include <stdio.h>

int NWD(int n, int m)
{
   if(n!=m) return NWD(n>m?n-m:n , m>n?m-n:m);
   return n;
}

int main()
{
	int n,m;
	scanf("%i %i",&n,&m);
	printf("%i" , NWD(n,m));
	return 0;
}
