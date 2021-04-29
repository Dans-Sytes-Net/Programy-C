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

int suma(int n,int m, int **wsk){
    int suma=0;
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            suma += *(*(wsk+i)+o);
        }
    }
    return suma;
}

void wpisz(int n,int m, int **wsk){
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            *(*(wsk+i)+o)=i+o;
        }
    }
}

void wypisz(int n,int m,int **wsk){
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            printf("%d",*(*(wsk+i)+o));
        }
        printf("\n");
    }
}

int main()
{
    int **tab = (int**) foo(3,4);
    wpisz(3,4,tab);
    wypisz(3,4,tab);
    printf("SUMA= %d,",suma(3,4,tab));
    return 0;
}
