#include <stdio.h>

int* foo(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int n=5;
    printf("%p",foo(n));
    return 0;
}
