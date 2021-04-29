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

void odwroc(int n,int m,int **wsk){
    int *temp=malloc(m*sizeof(int));
    for(int i=0;i<n;i++){
        int pierwszy= *(*(wsk+i)+0);
        int pom=0;
        for(int o=m-1;o>=0;o--){
            *(temp+pom)=*(*(wsk+i)+(o));
            pom++;
        }
        *(temp+pom)=pierwszy;
        for(int o=0;o<m;o++){
            *(*(wsk+i)+(o))=*(temp+o);
        }
    }
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
    int **tab = (int**) foo(3,4);
    wpisz(3,4,tab);
    wypisz(3,4,tab);
    odwroc(3,4,tab);
    printf("\n");
    wypisz(3,4,tab);
    return 0;
}
