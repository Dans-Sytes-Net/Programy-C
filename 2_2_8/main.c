#include <stdio.h>
#include <stdlib.h>

int my_pow(int n)
{
    int wynik;
    for(int i=1;i*i<=n;i++)
        wynik=i;
    return wynik;
}

int main()
{
    printf("%d\n",my_pow(4));
    printf("%d\n",my_pow(3));
    return 0;
}
