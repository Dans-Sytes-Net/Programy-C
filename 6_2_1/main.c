#include <stdio.h>

int **foo(int n , int m)
{
	int **wwsk = malloc(n*sizeof(int*));
	for(int i=0;i<n;i++){
        *(wwsk+i)= malloc(m*sizeof(int));
	}
	return wwsk;
}

int main()
{
	int **tab = (int**) foo(3,4);
	printf("%d\n",sizeof(tab));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(int*));
}
