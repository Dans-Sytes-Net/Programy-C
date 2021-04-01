#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int foo(int poprzednia)
{
    return foo(1-pow(poprzednia,2));
}

int main()
{
    int n;
    scanf("%i",&n);
    printf("%i",foo(n));
    return 0;
}
