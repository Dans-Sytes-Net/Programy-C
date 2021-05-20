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

struct element *usunw(struct element *Lista,struct element *elem){
    struct element *pierw = Lista;
    if(Lista==NULL)
        return NULL;
    while(Lista->next!=elem)
        Lista=Lista->next;
    Lista->next=Lista->next->next;
    free(elem);
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
    elem1=usunw(elem1,elem1->next);
    wypisz_lista(elem1);
    elem1=usunw(elem1,elem1->next);
    wypisz_lista(elem1);
    return 0;
}
