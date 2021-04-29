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

int **macierz(int n, int **wsk1 , int ** wsk2){  //rozwi¹zanie jak w zadaniu
    int **wyn = (int**) foo(n,n);
    for(int i=0;i<n;i++){
        for(int o=0;o<n;o++){
            *(*(wyn+i)+o) = *(*(wsk1+i)+o)* *(*(wsk2+i)+o);
        }
    }
    return wyn;
}

int **macierz_mat(int n,int **wsk1 , int **wsk2){
    int **wyn = (int**) foo(n,n);
    for(int i=0;i<n;i++){
        int suma=0;
        for(int o=0;o<n;o++){
            suma += (*(*(wsk1+i)+o)* *(*(wsk2+o)+i));
        }
    }
    return wyn;
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
            printf("%d ",*(*(wsk+i)+o));
        }
        printf("\n");
    }
}

int main()
{
    int **tab = (int**) foo(2,2);
    int **tab2 = (int**) foo(2,2);
    wpisz(2,2,tab);
    wypisz(2,2,tab);
    wpisz(2,2,tab2);
    wypisz(2,2,tab2);
    printf("\n");
    wypisz(2,2,macierz(2,tab,tab2));
    wypisz(2,2,macierz_mat(2,tab,tab2));
    return 0;
}
