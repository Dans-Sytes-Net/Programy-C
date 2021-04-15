// Daniel Kucharski Zadanie 6

#include <stdio.h>
#include <stdlib.h>

int porownaj_wsk(int n,double * tab1,double * tab2)
{
    double roznica;
    for(int i=0;i<n;i++)
    {
        roznica=*(tab1+i)-*(tab2+i);
        if(roznica<0)
            roznica*=-1;
        if(roznica>0.05)
            return 0;
    }
    return 1;
}

int main()
{
    double tab1[] = {1.05,2,3,4,5};
    double tab2[] = {1,2,3,4,5};
    printf("%d\n",porownaj_wsk(5,tab1,tab2));
    double tab3[] = {6,5,4,3,2,1};
    double tab4[] = {6,5,4,3,2,1};
    printf("%d\n",porownaj_wsk(5,tab3,tab4));
    return 0;
}
