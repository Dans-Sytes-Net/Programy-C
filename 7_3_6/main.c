#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

void wypisz_lista(struct element *elem){
    while(elem!=NULL){
        printf("%d ",elem->i);
        elem=elem->next;
    }
    printf("\n");
}

struct element *znajdz(struct element *elem, int a){
    while(elem!=NULL){
        if(elem->i==a){
            return elem;
        }
        elem=elem->next;
    }
    return NULL;
};

int main()
{
    struct element *elem1=malloc(sizeof(struct element));
    elem1->i=5;
    elem1->next=malloc(sizeof(struct element));
    elem1->next->i=7;
    elem1->next->next=malloc(sizeof(struct element));
    elem1->next->next->i=9;
    elem1->next->next->next=NULL;
    wypisz_lista(elem1);
    printf("%p \n",znajdz(elem1,7));
    printf("%p \n",znajdz(elem1,10));
    return 0;
}
