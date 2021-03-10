#include <stdio.h>
#include <stdlib.h>

void foo(int i, int *w)
{
    *w=i;
}

int main()
{
    int w=123;
    printf("%i\n",w);
    foo(5,&w);
    printf("%i",w);
    return 0;
}
