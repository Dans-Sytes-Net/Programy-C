#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b;
    scanf("%i %i" , &a , &b);
    a=fabs(a); b=fabs(b);
    if(a<b) printf("%i",b);
    if(a>b) printf("%i",a);
    return 0;
}
