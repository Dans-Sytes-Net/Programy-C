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

void wpisz(int **wsk,int n,int m){
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            *(*(wsk+i)+o)=o;
        }
    }
}

void wypisz(int **wsk,int n,int m){
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            printf("%d ",*(*(wsk+i)+o));
        }
        printf("\n");
    }
}

int suma(int **tab,int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            sum += *(*(tab+i)+o);
        }
    }
    return sum;
}

int main()
{
    int **tab = (int**) foo(3,4);
    wpisz(tab,3,4);
    wypisz(tab,3,4);
    printf("Suma %d\n",suma(tab,3,4));
    return 0;
}
