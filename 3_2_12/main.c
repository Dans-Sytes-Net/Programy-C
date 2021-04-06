#include <stdio.h>

double* foo(int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    int n=5;
    printf("%p",foo(n));
    return 0;
}
