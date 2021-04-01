#include <stdio.h>
#include <stdlib.h>

double *foo(int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    int n=5;
    double *a=foo(n);
    printf("%p\n",a);
    *a = 5.5;
    *(a+1)=6.2;
    printf("Index 0: %p %lf\n",a,*a);
    printf("Index 1: %p %lf\n",a+1,*(a+1));
    return 0;
}
