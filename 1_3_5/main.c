#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int j;
    scanf("%i",&j);
    switch(j)
    {
    case 1:
        {
            int a,h;
            scanf("%i %i",&a , &h);
            printf("Pole = %i",(a*h)/2);
            break;
        }
    case 2:
        {
            float a,b,c;
            scanf("%f %f %f",&a , &b ,&c);
            float ob = (float)(a+b+c)/2;
            printf("%f",ob);
            float wyn = (float)(ob*(ob-a)*(ob-b)*(ob-c));
            printf("\n%f" , wyn);
            break;
        }
    //default: printf("Jesteœ debilem");
    }
    return 0;
}
