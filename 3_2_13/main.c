#include <stdio.h>
#include <stdlib.h>

double foo_2(int n)
{
    return n;
}

double foo(double(*liczba)(int),int n)
{
    return liczba(n);
}


int main()
{
    printf("%lf\n",foo(foo_2,5));
    return 0;
}
