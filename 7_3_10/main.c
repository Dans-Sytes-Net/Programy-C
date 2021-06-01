#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element *next;
};

struct element *foo(){
    struct element *temp=malloc(sizeof(struct element));
    temp->next=NULL;
    return temp;
};

int main()
{
    printf("%p",foo());
    return 0;
}
