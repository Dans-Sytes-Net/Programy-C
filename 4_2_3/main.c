#include <stdio.h>
#include <stdlib.h>

double avg(int n,const int tab[])
{
	double srednia,sum=0;
	for(int i=0;i<n;i++)
		sum+=tab[i];
	srednia=sum/n;
	return srednia;
}


int main()
{
	int n=5;
	int tab[] = {1,2,3,4,5};
	printf("AVG: %lf\n",avg(n,tab));
	int tab2[] = {2,3};
	printf("AVG: %lf\n",avg(2,tab2));
}
