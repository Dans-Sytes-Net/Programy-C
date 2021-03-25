#include <stdio.h>

int* foo(int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    int n=5;
    printf("%p",foo(n));
    return 0;
}
