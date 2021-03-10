#include <stdio.h>
#include <stdlib.h>


int main()
{
    /*int tab[3];
    scanf("%i %i %i",&tab[0],&tab[1],&tab[2]);
    int wynik=tab[0];
    for(int i=1;i<3;i++)
    {
        if(wynik<tab[i]) wynik=tab[i];
    }
    printf("%i",wynik);*/

    int a,b,c , max;
	scanf("%i %i %i" , &a , &b , &c);
	max=a;
	if(b>=max) max=b;
	if(c>=max) max=c;
	printf("MAX %i",max);
	return 0;
}
