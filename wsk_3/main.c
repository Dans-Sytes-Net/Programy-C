#include <stdio.h>
#include <stdlib.h>


float ** rezerwuj(int n,int m){
    float **wsk=malloc(n*sizeof(float*));
    for(int i=0;i<m;i++)
        *(wsk+i) = malloc(m*sizeof(float));
    return wsk;
}

void wypisz(float ** tab_wsk,int n,int m){
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            printf("%f ",*(*(tab_wsk+o)+i));
        }
        printf("\n");
    }
    printf("\n");
}

void wpisz(float ** tab_wsk,int n,int m){
    for(int i=0;i<n;i++){
        for(int o=0;o<m;o++){
            *(*(tab_wsk+o)+i)=o+1;
        }
    }

}

float * foo(float ** tab_wsk , int n,int m)
{
    return (*(tab_wsk+(--m)+(--n)));
}

float suma(float **tab_wsk,int n){
    float suma=0;
    int o=0;
    for(int i=(n-1);i>=0;i--){
        suma+= *(*(tab_wsk+i)+o);
        o++;
    }
    return suma;
}


int main()
{
    float ** tab=(float**) rezerwuj(3,4);
    wpisz(tab,3,4);
    printf("%f \n",*(*(tab+1)+2));
    wypisz(tab,3,4);
    printf("\n");
    float ** mac=(float**) rezerwuj(3,3);
    wpisz(mac,3,3);
    wypisz(mac,3,3);
    printf("Suma = %f\n",suma(mac,3));
    printf("%p\n",foo(mac,3,3));
    return 0;
}
