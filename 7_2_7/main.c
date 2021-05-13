#include <stdio.h>
#include <stdlib.h>

struct zespolone{
    double im,re;
};

struct zespolone suma_zesp(struct zespolone z1 , struct zespolone z2)
{
    struct zespolone wyn={.im=(z1.im+z2.im),.re=(z1.re+z2.re)};
    return wyn;
}

void wypisz(struct zespolone z)
{
    printf("%lf %lf\n",z.im , z.re);
}

int main()
{
    struct zespolone z1 = {.im=5,.re=7};
    struct zespolone z2 = {.im=7,.re=9};
    wypisz(suma_zesp(z1,z2));
    return 0;
}
