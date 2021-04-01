#include <stdio.h>
#include <stdlib.h>

int sum(int n, int tab[])
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=tab[i];
	return sum;
}

double avg(int n,const int tab[])
{
	return sum(n,tab)/(double)(n);
}

int sum_pow(int n, int tab[])
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=tab[i]*tab[i];
	return sum;
}


int main()
{
	int n=5;
	int tab[] = {1,2,3,4,5};
	printf("AVG: %lf\n",avg(n,tab));
	printf("SUM: %i\n",sum(n,tab));
	printf("SUM_POW: %i\n",sum_pow(n,tab));
	int tab2[] = {2,3};
	printf("AVG: %lf\n",avg(2,tab2));
	printf("SUM: %i\n",sum(2,tab2));
	printf("SUM_POW: %i\n",sum_pow(2,tab2));
}
