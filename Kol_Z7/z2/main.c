#include <stdio.h>
#include <stdlib.h>

int licz(char *napis){
    int ile=0;
    for(int i=0;napis[i]!='\0';i++){
        int asci = napis[i];
        if(asci>=97 && asci <= 122) ile++;
    }
    return ile;
}

int main()
{
    char napis[]="Hello";
    printf("%d",licz(napis));
    return 0;
}
