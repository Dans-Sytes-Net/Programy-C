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
}

struct element *dodajk(struct element *elem, int a){
    struct element *wsk = elem;
    while(elem->next!=NULL)
        elem-elem->next;
    elem->next=malloc(sizeof(struct element));
    elem->next->i=a;
    elem->next->next=NULL;
    return wsk;
}

int main()
{
    struct element *elem1=malloc(sizeof(struct element));
    elem1->i=5;
    elem1->next=NULL;
    wypisz_lista(elem1);
    elem1=dodajk(elem1 , 2);
    printf("\n");
    wypisz_lista(elem1);
    return 0;
}
