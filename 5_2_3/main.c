#include <stdio.h>

int dlugosc(char nap[])
{
	int i=0;
	while(nap[i]!=NULL)	i++;
	return i;
}

int porownaj(char nap[], char nap2[])
{
	if(dlugosc(nap)!=dlugosc(nap2)) return 0;
	for(int i=0;nap[i]!=NULL;i++)
	{
		if(nap[i]!=nap2[i]) return 0;
	}
	return 1;
}

int dlugosc_wt(wchar_t nap[])
{
	int i=0;
	while(nap[i]!=NULL)	i++;
	return i;
}

int porownaj_wt(wchar_t nap[], wchar_t nap2[])
{
	if(dlugosc_wt(nap)!=dlugosc_wt(nap2)) return 0;
	for(int i=0;nap[i]!=NULL;i++)
	{
		if(nap[i]!=nap2[i]) return 0;
	}
	return 1;
}

int main()
{
	char nap[] = "Hello"; wchar_t wnap[] = L"Hello";
	char nap2[] = "Hello"; wchar_t wnap2[] = L"Hello";
	char nap3[] = "Hallo"; wchar_t wnap3[] = L"Hallo";
	printf("%d\n",porownaj(nap,nap3));
	printf("%d\n",porownaj(nap,nap2));
	printf("%d\n",porownaj_wt(wnap,wnap3));
	printf("%d\n",porownaj_wt(wnap,wnap2));
}
