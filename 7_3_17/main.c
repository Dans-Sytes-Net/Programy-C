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

void usun(struct element *Lista,int a)
{
    struct element *temp;
    while(Lista->next!=NULL && Lista->next->i!=a)
        Lista=Lista->next;
    if(Lista->next!=NULL){
        temp=Lista->next;
        Lista->next=temp->next;
        free(temp);
    }
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
    usun(head,5);
    wypisz_str_head(head);
    return 0;
}
