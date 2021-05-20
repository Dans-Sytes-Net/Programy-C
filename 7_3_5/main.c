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

struct element *dodajw(struct element *Lista,struct element *elem, int a){
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=a;
    if(elem==NULL){
        wsk->next=Lista;
        Lista=wsk;
    }else{
        wsk->next=elem->next;
        elem->next=wsk;
    }
    return Lista;
}

int main()
{
    struct element *elem1=malloc(sizeof(struct element));
    struct element *elem2=malloc(sizeof(struct element));
    elem1->i=5;
    elem1->next=NULL;
    elem2->i=5;
    elem2->next=malloc(sizeof(struct element));
    elem2->next->i=7;
    elem2->next->next=malloc(sizeof(struct element));
    elem2->next->next->i=8;
    elem2->next->next->next=NULL;
    wypisz_lista(elem1);
    elem1=dodajw(elem1,NULL,3);
    wypisz_lista(elem1);
    wypisz_lista(elem2);
    elem2=dodajw(elem2,elem2->next,9);
    wypisz_lista(elem2);
    return 0;
}
