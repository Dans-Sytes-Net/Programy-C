void wyczysc_wchar(wchar_t *);

#include <stdio.h>

void wyczysc(char list[])
{
	list[0] = '\0';
}

int main()
{
	char list[] = "Hello World";
	char litera = 'a';
	wchar_t napis[] = L"World";
    printf("%d %d\n",sizeof(litera),sizeof(litera)*8);
	printf("%d %d\n",sizeof(list),sizeof(list)*8);
	printf("%d %d\n",sizeof(napis),sizeof(napis)*8);
	printf("%s",list);
	wyczysc(list);
	printf("\n%s",list);
	wprintf(L"%s",napis);
	wyczysc_wchar(napis);
	wprintf(L"%s",napis);
	return 0;
}

void wyczysc_wchar(wchar_t lista[])
{
	lista[0] = '\0';
}
