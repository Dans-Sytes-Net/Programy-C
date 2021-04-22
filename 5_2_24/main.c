#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kopiuj(char napis[],char a[])
{
    strcpy(a,napis);
}

int main()
{
    char a[6];
    char nap[] ="Hello";
    kopiuj(nap,a);
    printf("%s",a);
    return 0;
}
