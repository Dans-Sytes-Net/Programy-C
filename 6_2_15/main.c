#include <stdio.h>
#include <stdlib.h>

void wpisz(int n,int x,int y,int tab[n][x][y])
{
	for(int i=0;i<n;i++)
	{
		for(int o=0;o<x;o++)
		{
			for(int p=0;p<y;p++)
			{
				tab[i][o][p]=p;
			}
		}
	}
}

int ile(int n , int x,int y,int tab[n][x][y])
{
	int suma=0;
	for(int i=0;i<n;i++)
	{
		for(int o=0;o<x;o++)
		{
			for(int p=0;p<y;p++)
			{
				suma+=tab[i][o][p];
			}
		}
	}
	return suma;
}

int main()
{
	int tab[3][100][100];
	wpisz(3,100,100,tab);
	printf("%d",ile(3,100,100,tab));
}
