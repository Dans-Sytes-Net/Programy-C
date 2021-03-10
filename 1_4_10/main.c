#include <stdio.h>
int main()
{
	int n,i,sqrt=0;
	scanf("%i" , &n);
	for(i=1;i<=n;i++)
		if(i*i<=n) sqrt=i;
	printf("%i",sqrt);
	return 0 ;
}
