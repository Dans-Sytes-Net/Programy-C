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
        int a=0;
        for(int o=0;o<n;o++){
            *(*(wyn+i)+o) = *(*(wsk1+i)) * *(*(wsk2)+(a)) +  *(*(wsk1+i)+1) * *(*(wsk2+1)+(a));
            a++;
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
    printf("M1:\n");
    wypisz(2,2,tab);
    wpisz2(2,2,tab2);
    printf("M2:\n");
    wypisz(2,2,tab2);
    printf("Tablicowo:\n");
    wypisz(2,2,macierz(2,tab,tab2));
    printf("Macierzowo:\n");
    wypisz(2,2,macierz_mat(2,tab,tab2));
    return 0;
}
