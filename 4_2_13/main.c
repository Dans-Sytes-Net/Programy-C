#include <stdio.h>
#include <stdlib.h>

int *foo(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int n=5;
    int *a=foo(n);
    printf("%p\n",a);
    *a = 5;
    *(a+1)=6;
    printf("Index 0: %p %d\n",a,*a);
    printf("Index 1: %p %d\n",a+1,*(a+1));
    return 0;
}
