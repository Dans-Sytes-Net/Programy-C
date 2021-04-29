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

double avg(int n,int m, int **wsk){
    double max_avg=-1;
    for(int i=0;i<n;i++){
        double avg=0, suma=0;
        for(int o=0;o<m;o++){
            suma += *(*(wsk+i)+o);
        }
        if((suma/m)>max_avg){
                max_avg=(suma/m);
        }
    }
    return max_avg;
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
    printf("MAX AVG= %lf",avg(3,4,tab));
    return 0;
}
