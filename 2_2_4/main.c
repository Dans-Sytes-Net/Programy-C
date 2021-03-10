#include <stdio.h>
#include <stdlib.h>


int foo(int n)
{
    int i , k=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0) k=i;
    }
    return k;
}

int main()
{
    int n;
    scanf("%i",&n);
    printf("%i",foo(n));
    return 0;
}
