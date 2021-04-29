#include <stdio.h>
#include <stdlib.h>

int **foo(int n , int m)
{
	int **wwsk = malloc(n*sizeof(int*));
	for(int i=0;i<n;i++){
        *(wwsk+i)= malloc(m*sizeof(int));
	}
	return wwsk;
}

void free_tab(int n,int m , int **wsk)
{
    for(int i=0;i<n;i++){
        free(*(wsk+i));
    }
    free(wsk);
}

int main()
{
    int **tab = (int**) foo(3,4);
    free_tab(3,4,tab);
    return 0;
}
