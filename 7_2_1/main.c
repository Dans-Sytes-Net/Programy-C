#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    double a,b,c;
};

double obwod(struct trojkat tr)
{
    return tr.a+tr.b+tr.c;
}

int main()
{
    struct trojkat t1 = {.a=5,.b=6,.c=7};
    printf("%lf",obwod(t1));
    return 0;
}
