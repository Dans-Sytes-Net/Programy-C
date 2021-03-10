#include <stdio.h>
#include <stdlib.h>

int *foo(int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    printf("%p",foo(4));
    return 0;
}
