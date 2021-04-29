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

void zamien(int n,int m,int **wsk1 , int **wsk2){
    int *temp = malloc(sizeof(int*));
    for(int i=0;i<n;i++){
        temp = *(wsk1+i);
        *(wsk1+i)=*(wsk2+i);
        *(wsk2+i)=temp;
    }
}

void wpisz(int n,int m, int **wsk){
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            *(*(wsk+i)+o)=i+o;
        }
    }
}

void wpisz2(int n,int m, int **wsk){
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            *(*(wsk+i)+o)=i*2;
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
    int **tab2 = (int**) foo(3,4);
    wpisz(3,4,tab);
    wpisz2(3,4,tab2);
    wypisz(3,4,tab);
    printf("\n");
    wypisz(3,4,tab2);
    zamien(3,4,tab,tab2);
    printf("\n");
    wypisz(3,4,tab);
    printf("\n");
    wypisz(3,4,tab2);
    return 0;
}
