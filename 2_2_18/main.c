#include <stdio.h>
#include <stdlib.h>

int foo(int poprzednia)
{
    return foo(1-poprzednia);
}

int main()
{
    int n;
    scanf("%i",&n);
    printf("%i",foo(n));
    return 0;
}
