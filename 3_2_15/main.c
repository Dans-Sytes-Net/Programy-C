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
    printf("%d %d\n", i , o);
    foo(&i,&o);
    printf("%d %d\n", i , o);
    return 0;
}
