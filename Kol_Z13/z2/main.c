#include <stdio.h>
#include <stdlib.h>

int ile_spacji(char napis[])
{
    int spacje=0;
    int i=0;
    while(napis[i]!='\0')
    {
        if(napis[i]==' ')
        {
            spacje++;
        }
        i++;
    }
    return spacje;
}

int main()
{
    char napis[] ="Hello  world!";
    printf("Ile Spacji: %d",ile_spacji(napis));
    return 0;
}
