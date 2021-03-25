#include <stdio.h>

int foo(int *a , int *b)
{
	if(*a>*b) return *b;
	return *a;
}

int main()
{
	int x=5 ,y=7;
	printf("X - %d  - %i\n",&x,x); // 0x61fe1c -- 5
	printf("Y - %d  - %i\n",&y,y); // 0x61fe18 -- 7
	printf("%i",foo(&x,&y));
	return 0;
}
