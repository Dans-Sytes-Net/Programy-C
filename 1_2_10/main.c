#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    scanf("%f",&x);
    if(x<0){
        x=x*(-1);
        x--;
    }
    else x++;
    printf("%f",x);
    return 0;
}
