#include <stdio.h>
#include <stdlib.h>


int dlugosc(char napis[])
{
    int dlugosc=0;
    while(*(napis++)!='\0')
        dlugosc++;
    return dlugosc;
}

int dlugosc_wchar(wchar_t napis[])
{
    int dlugosc=0;
    while(*(napis++)!='\0')
        dlugosc++;
    return dlugosc;
}

int main()
{
    char napis[] ="Hello world!";
    printf("%d\n",dlugosc(napis));
    wchar_t napis2[] =L"Hello";
    printf("%d\n",dlugosc_wchar(napis2));
    //char napis2[] = "Napis";
    //printf("%d\n",napis[0]);
    //int litera_dec = napis[0];
    //printf("%d",litera_dec);

    return 0;
}

