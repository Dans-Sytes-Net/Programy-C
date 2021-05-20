#include <stdio.h>
#include <stdlib.h>

struct pktn{
    int wymiar;
    double *n_tab;
};

int main()
{
    struct pktn p1 = {.wymiar=3,.n_tab={1,2,3}};
    struct pktn p2 = {.wymiar=5,.n_tab={1,2,3,4,5}};
    printf("%lf \n",(p1.n_tab));
    return 0;
}
