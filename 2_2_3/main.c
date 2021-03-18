#include <stdio.h>
#include <stdlib.h>

int dzielnik(int n)
{
    int temp=0;
    for(int i=1;i<n;i++)
        if(n%i==0) temp=i;
    return temp;
}

int main()
{
    printf("%d dzielnik %d\n",12,dzielnik(12));
    printf("%d dzielnik %d\n",4,dzielnik(4));
    printf("%d dzielnik %d\n",10,dzielnik(10));
    return 0;
}
