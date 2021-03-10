#include <stdio.h>
#include <stdlib.h>

int bezw(int n);

int main()
{
    printf("%d\n",bezw(-10));
    return 0;
}

int bezw(int n)
{
    if(n<0) return n*(-1);
    return n;
}
