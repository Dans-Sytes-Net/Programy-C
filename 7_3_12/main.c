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
    struct element *temp=elem->next;
    elem->next=malloc(sizeof(struct element));
    elem->next->i=a;
    elem->next->next=temp;
}

void dodaj_po(struct element *elem , int a, struct element * b){
    while(elem!=NULL){ //tab[i] == b
        if(elem == b){
            struct element *temp=elem->next;
            elem->next=malloc(sizeof(struct element));
            elem->next->i=a;
            elem->next->next=temp;
            break;
        }
        elem=elem->next;
    }
}

int main()
{
    int * a=malloc(sizeof(int));
    *a=5;
    printf("%d %d\n",a,*a);
    printf("%d %d\n",&a,a);
    struct element *head=malloc(sizeof(struct element));
    head->next=malloc(sizeof(struct element));
    head->next->i=5;
    head->next->next=malloc(sizeof(struct element));
    head->next->next->i=6;
    head->next->next->next=NULL;
    wypisz_str_head(head);
    dodaj(head,5);
    dodaj(head,5);
    dodaj_po(head,11,head->next->next);
    //dodaj(head,4);
    wypisz_str_head(head);
    return 0;
}
