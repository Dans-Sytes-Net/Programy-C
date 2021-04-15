#include <stdio.h>
#include <stdlib.h>

void wpisz(char *napis)
{
    scanf("%s",napis);
}

void wpisz_wchar(wchar_t *napis)
{
    scanf(L"%ls",napis);
}

int main()
{
    char napis[20];
    wchar_t napis2[20];
    wpisz(napis);
    printf("%s",napis);
    wpisz_wchar(napis2);
    wprintf(L"%ls",napis2);
    return 0;
}
