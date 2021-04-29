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

int max_index(int n,int m, int **wsk){
    int index=-1;
    for(int i=0;i<n;i++){
        double avg=0, suma=0;
        for(int o=0;o<m;o++){
            suma += *(*(wsk+i)+o);
        }
        if((suma/m)>avg){
            index=i;
            avg = suma/m;
        }
    }
    return index;
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
    printf("MAX INDEX= %d",max_index(3,4,tab));
    return 0;
}
