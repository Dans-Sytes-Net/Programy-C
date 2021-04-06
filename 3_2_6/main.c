#include <stdio.h>

void foo(int n , int *w)
{
	*w=n;
}

int main()
{
	int x=2,y=6;
	foo(x,&y);
	printf("%d %d",x,y);
	return 0;
}
