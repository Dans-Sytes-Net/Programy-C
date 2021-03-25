#include <stdio.h>

double *rezerwuj_double()
{
	return malloc(sizeof(double));
}

int main()
{
	printf("%p",rezerwuj_double());
	return 0;
}
