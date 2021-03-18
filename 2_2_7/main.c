#include <stdio.h>
#include <stdlib.h>

double pot_n_m(int n,int m)
{
    double wyn;
    if(n==0) return 0;
    if(m==0) return 1;
    wyn = (m<0?(double)1/n:n);
    int temp = (m<0?-m:m);
    for(int i=1;i<temp;i++)
        wyn*=wyn;
    return wyn;
}

int main()
{
    printf("%d ^ %d = %lf\n",2,-2,pot_n_m(2,-2));
    printf("%d ^ %d = %lf\n",3,0,pot_n_m(3,0));
    printf("%d ^ %d = %lf\n",0,2,pot_n_m(0,2));
    printf("%d ^ %d = %lf\n",25,2,pot_n_m(25,2));
    return 0;
}
