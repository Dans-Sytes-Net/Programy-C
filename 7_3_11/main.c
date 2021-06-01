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
}

void wyczysc(struct element *elem){
    struct element *temp=elem->next;
    elem=temp;
    while(elem!=NULL){
        elem=elem->next;
        free(temp);
        temp=elem;
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
    wyczysc(head);
    return 0;
}
