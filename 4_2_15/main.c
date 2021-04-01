#include <stdio.h>
#include <stdlib.h>

void free_tab(int * tab)
{
    free(tab);
}

int *foo(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int n=5;
    int *a=foo(n);
    printf("%p\n",a);
    free_tab(a);
    return 0;
}
