#include <stdio.h>
#include <stdlib.h>

void wypisz(float * tab_wsk,int n){
    for(int i=0;i<n;i++){
        printf("%f ",*(tab_wsk+i));
    }
    printf("\n");
}

void wpisz(float * tab_wsk,int n){
    for(int i=0;i<n;i++){
        *(tab_wsk+i)=i;
    }
}

float * rezerwuj(int n){
    return malloc(n*sizeof(float));
}

int main()
{
    float * tab= rezerwuj(4);
    wpisz(tab,4);
    printf("%f %d\n",*tab,tab);
    printf("%f %d\n",*(tab+5),(tab+5));
    wypisz(tab,4);
    return 0;
}
