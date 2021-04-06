#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int porownaj(int n , float tab1[], float tab2[])
{
    float roznica=0;
    for(int i=0;i<n;i++)
    {
        roznica = tab2[i]-tab1[i];
        if(roznica <0) roznica*=(-1);
        if(roznica>0.1) return 0;
    }
    return 1;
}

int main()
{
    float tab1[]= {1.5,2.1,3.5,4.6,5} , tab2[] = {1.5,2.1,3.5,4.6,5};
    printf("%d",porownaj(5,tab1,tab2));
    float tab3[]= {1.5,2.1,3.5,4.6,5} , tab4[] = {1.6,2.1,3.5,4.6,5};
    printf("%d",porownaj(5,tab3,tab4));
    printf("\n%.20f %.10f %.10f",0.1,tab4[0],tab4[0]-tab3[0]);
    return 0;
}
