#include <stdio.h>

int foo(int *a , int *b)
{
	if(*a>*b) return *b;
	return *a;
}

int main()
{
	int x=5 ,y=7;
	printf("X - %i  - %i\n",&x,x);
	printf("Y - %i  - %i\n",&y,y);
	printf("%i",foo(&x,&y));
	return 0;
}
