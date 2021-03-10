#include <stdio.h>
#include <stdlib.h>

void foo(const int *i,int *o)
{
    *o=*i;
}

int main()
{
    const int i=5;
    int o=9;
    printf("%i %i", i , o);
    foo(&i,&o);
    printf("%i %i", i , o);
    return 0;
}
