#include <stdio.h>

int * foo(int * a , int * b)
{
	if(*a>*b) return b;
	return a;
}

int main()
{
	int x=7 ,y=5;
	printf("X - %d  - %i\n",&x,x);
	printf("Y - %d  - %i\n",&y,y);
	printf("%d",foo(&x,&y));
	return 0;
}
