#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

struct element *foo(){
    return NULL;
}

int main()
{
    struct element *elem = foo();
    return 0;
}
