#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kopiuj(char napis[],char *a)
{
    char *nap= malloc((strlen(napis)+1)*sizeof(char));
    printf("%d\n",nap);
    strcpy(nap,napis);
    a = nap;
    printf("%d\n",a);
}

int main()
{
    char a[6];
    char nap[] ="Hello";
    printf("%d\n",&a);
    kopiuj(nap,&a);
    printf("%d\n",&a);
    printf("%s",a);
    return 0;
}
