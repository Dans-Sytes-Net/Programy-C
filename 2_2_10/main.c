#include <stdio.h>
#include <stdlib.h>

int nwd(int a, int b){

    int pom;
    while(b != 0){
        pom = b;
        b = a%b;
        a = pom;
    }
    return a;
}

int obliczSume(int n){

    int suma = 0;
    for(int i = 1; i < n; i++){
        if(nwd(i,n) == 1)
            suma += i;
    }
    return suma;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",obliczSume(n));
    return 0;
}
