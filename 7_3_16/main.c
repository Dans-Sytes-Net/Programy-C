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

struct element * znajdzp(struct element *Lista , int a){
    Lista=Lista->next;
    while(Lista->next!=NULL){
        if(Lista->next->i == a) return Lista;
        Lista=Lista->next;
    }
    return Lista;
}

int main()
{
    struct element *head=malloc(sizeof(struct element));
    head->next=malloc(sizeof(struct element));
    head->next->i=5;
    head->next->next=malloc(sizeof(struct element));
    head->next->next->i=6;
    head->next->next->next=NULL;
    printf("%p \n",znajdzp(head,6));
    printf("%p \n",znajdzp(head,7));
    return 0;
}
