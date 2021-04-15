#include <stdio.h>
#include <stdlib.h>

void przepisz(char napis1[],char napis2[])
{
    int i=0;
    while(*(napis1+i)!=0){
        *(napis2+i)=*(napis1+i);
        i++;
    }
}

void przepisz_wchar(wchar_t napis1[],wchar_t napis2[])
{
    int i=0;
    while(*(napis1+i)!=0){
        *(napis2+i)=*(napis1+i);
        i++;
    }
}

int main()
{
    char nap[] = "Hello"; wchar_t wnap[] = L"Hello";
    char napis[6]; wchar_t napis2[6];
    przepisz(nap,napis);
    przepisz_wchar(wnap,napis2);
    printf("%s\n",napis);
    wprintf(L"%s\n",napis2);
    return 0;
}
