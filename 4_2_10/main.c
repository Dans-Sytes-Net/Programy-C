#include <stdio.h>
#include <stdlib.h>

int index(int n,int elem , int tab[])
{
	int i;
	for(i=0;i<n;i++)
		if(elem==tab[i]) return i;
	return -1;
}

int max(int n,int tab[],int in)
{
	int i,max=tab[0];
	for(i=1;i<n;i++)
		if(max<tab[i]) max=tab[i];
	if(in==0) return max;
	else return index(n,max, tab);
}

int min(int n,int tab[],int in)
{
	int i,min=tab[0];
	for(i=1;i<n;i++)
		if(min>tab[i]) min=tab[i];
	if(in==0) return min;
	else return index(n,min, tab);
}

int bezw(int n,int tab[],int min_p)
{
	int i;
	int tab_bezw[n];
	for(i=0;i<n;i++)
	{
		if(tab[i]<0) tab_bezw[i]=tab[i]*-1;
		else tab_bezw[i]=tab[i];
	}
	if(min_p==0) return max(n,tab_bezw,0);
	else return min(n,tab_bezw,0);

}

int main()
{
	int tab[] = {1,-16,6,3,8,10};
	printf("MAX_ELEM: %i\n",max(6,tab,0));
	printf("MIN_ELEM: %i\n",min(6,tab,0));
	printf("MAX_ELEM_INDEX: %i\n",max(6,tab,1));
	printf("MIN_ELEM_INDEX: %i\n",min(6,tab,1));
	printf("MAX_ELEM_BEZW: %i\n",bezw(6,tab,0));
	printf("MIN_ELEM_BEZW: %i\n",bezw(6,tab,1));
	return 0;
}
