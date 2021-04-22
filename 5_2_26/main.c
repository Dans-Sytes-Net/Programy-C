#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void duze(char napis[]){
    strupr(napis);
}

int main()
{
    char nap[] ="Hello";
    duze(nap);
    printf("%s",nap);
    return 0;
}
