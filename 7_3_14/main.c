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

void dodajw(struct element *Lista , struct element *elem , int a){
    while(Lista!=elem)
        Lista= Lista->next;
    struct element *temp = malloc(sizeof(struct element));
    temp=Lista->next;
    Lista->next=malloc(sizeof(struct element));
    Lista->next->i=a;
    Lista->next->next=temp;

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
    dodajw(head,head->next->next,7);
    wypisz_str_head(head);
    return 0;
}
