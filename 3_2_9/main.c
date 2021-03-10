#include <stdio.h>
#include <stdlib.h>

int *foo_int()
{
    return malloc(sizeof(int));
}

double *foo_double(){
    return malloc(sizeof(double));
}

int main()
{
    int n;
    printf("%i\n",&n);
    int *tab[2];
    tab[0] = foo_int();
    tab[1] = foo_int();
    *tab[0] = 5;
    *tab[1] = 10;
    printf("INT1: %i - %i\n",tab[0],*tab[0]);
    printf("INT2: %i - %i\n",tab[1],*tab[1]);
    printf("%p\n", foo_double());
     printf("%p", foo_double());
    return 0;
}
