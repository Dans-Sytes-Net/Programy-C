#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element *next;
};

void wypisz_str_head(struct element *elem){
    elem=elem->next;
    while(elem!=NULL){
        printf("%d ",elem->i);
        elem=elem->next;
    }
    printf("\n");
}

struct element * znajdz(struct element *Lista , int a){
    Lista=Lista->next;
    while(Lista!=NULL){
        if(Lista->i == a) return Lista;
        Lista= Lista->next;
    }
    return NULL;
}

int main()
{
    struct element *head=malloc(sizeof(struct element));
    head->next=malloc(sizeof(struct element));
    head->next->i=5;
    head->next->next=malloc(sizeof(struct element));
    head->next->next->i=6;
    head->next->next->next=NULL;
    printf("%p \n",znajdz(head,6));
    printf("%p \n",znajdz(head,7));
    return 0;
}
