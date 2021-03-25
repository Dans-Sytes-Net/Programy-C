#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    static suma=0;
    suma+=n;
    printf("%d  ",suma);
    return n;
}

int main()
{
    printf("%d\n",foo(5));
    printf("%d\n",foo(5));
    printf("%d\n",foo(5));
    printf("%d\n",foo(5));
    printf("%d\n",foo(5));
    return 0;
}
