#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    double a,b,c;
};

void przepisz(struct trojkat troj1 , struct trojkat *troj2)
{
    troj2->a=troj1.a;
    troj2->b=troj1.b;
    troj2->c=troj1.c;
}

int main()
{
    struct trojkat t1 = {.a=5,.b=6,.c=7};
    struct trojkat t2 = {.a=6,.b=7,.c=20};
    printf("t1: %lf %lf %lf\n",t1.a,t1.b,t1.c);
    printf("t2: %lf %lf %lf\n",t2.a,t2.b,t2.c);
    przepisz(t1,&t2);
    printf("t1: %lf %lf %lf\n",t1.a,t1.b,t1.c);
    printf("t2: %lf %lf %lf\n",t2.a,t2.b,t2.c);
    return 0;
}
