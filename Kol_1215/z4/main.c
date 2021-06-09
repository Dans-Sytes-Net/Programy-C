#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

void fun(struct element *elem){
    int ile=0;
    while(elem!=NULL){
        ile++;
        printf("%p\n",elem);
        elem=elem->next;
    }
    printf("Ilosc elementow = %d\n",ile);
}

int main()
{
    struct element * elem = malloc(sizeof(struct element));
    elem->x=5;
    elem->next=malloc(sizeof(struct element));
    elem->next->x=6;
    elem->next->next=malloc(sizeof(struct element));
    elem->next->next->x=7;
    elem->next->next->next=NULL;
    fun(elem);
    return 0;
}
