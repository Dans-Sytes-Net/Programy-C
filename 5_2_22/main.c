#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * sklej(char a[],char b[],char c[]){
    int dlugosc=strlen(a)+strlen(b)+strlen(c);
    char *wyn=malloc(dlugosc*sizeof(char));
    strcpy(wyn,a);
    strcat(wyn,b);
    strcat(wyn,c);
    return wyn;
}

int main()
{
    char a[] = "Hello ";
    char b[] = "World ";
    char c[] = "Hello ";
    printf("%s",sklej(a,b,c));
    return 0;
}
