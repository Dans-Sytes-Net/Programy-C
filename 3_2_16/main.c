#include <stdio.h>
#include <stdlib.h>

void foo(int const *a, int * const b)
{
    *b=*a;
}

int main()
{
    int const a=5;
    int b = 7;
    printf("%d  %d\n",a , b);
    foo(&a,&b);
    printf("%d  %d\n",a , b);
    return 0;
}
