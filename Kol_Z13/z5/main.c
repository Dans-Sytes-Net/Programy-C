#include <stdio.h>
#include <stdlib.h>

struct element{
    float x;
    struct element *next;
};

int rowne(struct element *e1, float a){
    int ile=0;
    while(e1!=NULL){
        if(e1->x==a)
            ile++;
        e1=e1->next;
    }
    return ile;
}

int main()
{
   struct element *e1 = malloc(sizeof(struct element));
   e1->x=5;
   e1->next=malloc(sizeof(struct element));
   e1->next->x=4;
   e1->next->next=malloc(sizeof(struct element));
   e1->next->next->x=4;
   e1->next->next->next=NULL;
   printf("%d", rowne(e1,4));
    return 0;
}
