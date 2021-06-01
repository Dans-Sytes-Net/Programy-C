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

void dodaj(struct element *elem,int a){
    while(elem->next!=NULL)
        elem=elem->next;
    elem->next=malloc(sizeof(struct element));
    elem->next->i=a;
    elem->next->next=NULL;
}
int main()
{
    struct element *head=malloc(sizeof(struct element));
    head->next=malloc(sizeof(struct element));
    head->next->i=5;
    head->next->next=malloc(sizeof(struct element));
    head->next->next->i=6;
    head->next->next->next=NULL;
    wypisz_str_head(head);
    dodaj(head,7);
    wypisz_str_head(head);
    return 0;
}
