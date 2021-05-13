#include <stdio.h>
#include <stdlib.h>

struct pktn{
    int wymiar;
    double *n_tab;
};

void wypisz_struct(struct pktn p){
    for(int i=0;i< p.wymiar ;i++)
    {
        printf("%lf ",p.n_tab);
    }
    printf("\n");
}

int main()
{
    struct pktn p1 = {.wymiar=3,.n_tab={1,2,3}};
    struct pktn p2 = {.wymiar=5,.n_tab={1,2,3,4,5}};
    printf("%lf \n",(p1.n_tab);
    wypisz_struct(p1);
    wypisz_struct(p2);
    return 0;
}
