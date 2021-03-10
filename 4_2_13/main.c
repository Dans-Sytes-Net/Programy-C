#include <stdio.h>
#include <stdlib.h>

int *foo(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int n=5;
    int b=7;
    printf("%d  %d\n",&b,b);
    printf("%d  %d\n",&n,n);
    int *a=foo(n);
    printf("%d\n",sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%i",&a+i);
        printf("%d %d %d\n",a+i, &a+i, *a);
    }
    *a=foo(7);
    for(int i=5;i<=6;i++){
        *a=i;
    }
    for(int i=0;i<7;i++){
        printf("%d\n",*a);
    }
    return 0;
}
