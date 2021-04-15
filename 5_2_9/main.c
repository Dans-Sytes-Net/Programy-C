#include <stdio.h>
#include <stdlib.h>

int size(char a[])
{
	int i=0;
	while(a[i]!=NULL)	i++;
	return i;
}

void wytnij(char *nap , int n,int m)
{
	for(int i=n;i<size(nap);i++)
	{
		nap[i]=nap[++m];
	}
}

int size_wt(wchar_t a[])
{
	int i=0;
	while(a[i]!=NULL)	i++;
	return i;
}

void wytnij_wt(wchar_t *nap2 , int n,int m)
{
	for(int i=n;i<size_wt(nap2);i++)
	{
		nap2[i]=nap2[++m];
	}
}

int main()
{
	char nap[] = "Hello World";
	wchar_t nap2[] = L"Hello";
	wytnij(nap,0,3);
	wytnij_wt(nap2,2,4);
	printf("%s\n",nap);
	wprintf(L"%s\n",nap2);
}

