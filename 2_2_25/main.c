#include <stdio.h>
#include <stdlib.h>

int ciag(int n)
{
    if(n==1||n==0) return 1;
    if(n%2==0) return ciag(n-1)+n;
    return ciag(n-1)*n;
}


int main()
{
    printf("n=%d %d\n",0,ciag(0));
    printf("n=%d %d\n",1,ciag(1));
    printf("n=%d %d\n",5,ciag(5));
    printf("n=%d %d\n",6,ciag(6));
    printf("n=%d %d\n",7,ciag(7));
    printf("n=%d %d\n",8,ciag(8));
    return 0;
}
