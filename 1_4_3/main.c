#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5,m=15,k=25;
    for(int i = n; i<k;i+=n){
            if(i>m) printf("%d ",i);
    }
    return 0;
}

