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

struct element *usun(struct element *Lista,int a){
    struct element *pierw = Lista;
    struct element *tmp=malloc(sizeof(struct element));
    if(Lista==NULL)
        return NULL;
    while(Lista->i!=a)
        Lista=Lista->next;
    tmp=Lista->next->next;
    free(Lista->next);
    Lista->next=tmp;
    return pierw;
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
    elem1=usun(elem1,7);
    wypisz_lista(elem1);
    return 0;
}
