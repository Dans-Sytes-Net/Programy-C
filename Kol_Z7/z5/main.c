#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

int foo(struct element *elem, int a){
    while(elem!=NULL){
            if(elem->x==a) return 1;
            elem=elem->next;
    }
    return 0;
}

int main()
{
    struct element *elem1=malloc(sizeof(struct element));
    elem1->x=5;
    elem1->next=malloc(sizeof(struct element));
    elem1->next->x=7;
    elem1->next->next=malloc(sizeof(struct element));
    elem1->next->next->x=10;
    elem1->next->next->next=NULL;
    printf("%d",foo(elem1,7));
    return 0;
}
