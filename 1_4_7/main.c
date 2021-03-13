#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,wynik=1;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++)
        wynik*=n;
    printf("%d",wynik);
    return 0;
}
