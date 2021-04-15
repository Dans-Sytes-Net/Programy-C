#include <stdio.h>
#include <stdlib.h>

void wytnij(char * nap1 ,char * nap2 )
{
	int i,dl,j;
	int wyst[256]={};
	for(i=0;nap2[i]!=0;i++)
	{
		wyst[nap2[i]]=1;
	}
	for(i=0,j=0;nap1[i]!=0;i++)
	{
		if(wyst[nap1[i]]==0)
		{
			if(j<i)	nap1[j]=nap1[i];
			j++;
		}
	}
	nap1[j]=0;
}

int main()
{
	char nap[] = "abc";
	char nap2[] = "alfabet";
	wytnij(nap2,nap);
	printf("%s",nap2);
}
