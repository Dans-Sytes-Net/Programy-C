#include <stdio.h>
#include <stdlib.h>

int size(char a[])
{
	int i=0;
	while(a[i]!=NULL)	i++;
	return i;
}

int size_wt(wchar_t a[])
{
	int i=0;
	while(a[i]!=NULL)	i++;
	return i;
}

void sklej(char nap[], char nap2[],char nap3[])
{
	int i=0,o=0;
	while(i<size(nap))
	{
		nap3[i]=nap[i];
		i++;
	}
	while(o<size(nap2))
	{
		nap3[i]=nap2[o];
		i++;
		o++;
	}
	nap3[i]='\0';
}

void sklej_wt(wchar_t nap[], wchar_t nap2[],wchar_t nap3[])
{
	int i=0,o=0;
	while(i<size_wt(nap))
	{
		nap3[i]=nap[i];
		i++;
	}
	while(o<size_wt(nap2))
	{
		nap3[i]=nap2[o];
		i++;
		o++;
	}
	nap3[i]='\0';
}


int main()
{
	char a[] = "Ala m"; char b[] = "a kota"; char c[size(a)+size(b)];
	wchar_t a1[] = L"Ala m"; wchar_t b1[] = L"a kota"; wchar_t c1[11];
	sklej(a,b,c);
	sklej_wt(a1,b1,c1);
	printf("%s",c);
	wprintf(L"\n%s",c1);
	return 0;
}
