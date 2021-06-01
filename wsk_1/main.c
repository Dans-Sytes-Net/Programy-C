#include <stdio.h>
#include <stdlib.h>

int * foo(int * wsk){
    return wsk;
}

void zmiana(int * wsk,int i){
    *wsk = i;
}

int main()
{
    int* p=malloc(sizeof(int));
    *p = 5;
    printf("%p %d\n",p , *p);
    int *c = foo(p);
    printf("%p %d\n",c , *c);
    const a=5;
    //a=7;
    printf("%d \n",a);
    zmiana(&a,7);
    printf("%d \n",a);
    return 0;
}
