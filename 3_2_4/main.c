#include <stdio.h>
#include <stdlib.h>

void foo(int *a , int *b)
{
    if (*b<*a)
    {
        int p;
        p=*a;
        *a=*b;
        *b=p;
    }
}

int main()
{
    int a = 5 , b = 6;
    printf("%d %d\n",a,b);
    foo(&a,&b);
    printf("%d %d\n",a,b);
    a=7;
    b=4;
    printf("%d %d\n",a,b);
    foo(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
