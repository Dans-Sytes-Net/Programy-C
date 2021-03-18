#include <stdio.h>
#include <stdlib.h>

double pot(int n)
{
    double wyn;
    if(n==0) return 1;
    wyn = (n<0?(double)1/2:2);
    int temp = (n<0?-n:n);
    for(int i=1;i<temp;i++)
        if(n<0) wyn*=(double)(1)/2;
        else wyn*=2;
    return wyn;

}

int main()
{
    printf("2^%d = %0.2lf\n",2,pot(2));
    printf("2^%d = %0.2lf\n",4,pot(4));
    printf("2^%d = %0.2lf\n",-1,pot(-1));
    printf("2^%d = %0.2lf\n",3,pot(3));
    printf("2^%d = %0.2lf\n",-2,pot(-2));
    return 0;
}
