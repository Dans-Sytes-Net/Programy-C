#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

void wypisz(struct element *elem)
{
    while(elem!=NULL){
        printf("%d ",elem->i);
        elem=elem->next;
    }
}

int main()
{
    struct element * element1 = malloc(sizeof(struct element));
    //printf("%p",element1);
    element1->i=5;
    element1->next=malloc(sizeof(struct element));
    element1->next->i=6;
    element1->next->next=malloc(sizeof(struct element));
    element1->next->next->i=7;
    element1->next->next->next=NULL;
    wypisz(element1);
    return 0;
}
