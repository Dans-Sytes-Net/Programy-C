#include <stdio.h>
#include <stdlib.h>
int *rezerwuj_int()
{
    return malloc(sizeof(int));
}

int main()
{
    printf("%p",rezerwuj_int());
    return 0;
}
