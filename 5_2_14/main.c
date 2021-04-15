#include <stdio.h>
#include <stdlib.h>

void wypisz(char *a)
{
	printf("%s",a);
}

void wypisz_wt(wchar_t *a)
{
	wprintf(L"%s",a);
}

int main()
{
	char hello[]="Hello World";
	wchar_t hello2[]=L"Hello World";
	wypisz(hello);
	wypisz_wt(hello2);
	return 0;
}
