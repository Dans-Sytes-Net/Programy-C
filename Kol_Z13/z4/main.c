#include <stdio.h>
#include <stdlib.h>

int iloczyn(int n,int m,int tab[n][m])
{
    int wynik=1;
    for(int i=0;i<n;i++)
    {
        wynik=wynik*tab[i][i];
    }
    return wynik;
}

int main()
{
    int tab[3][3] ={{1,2,3},{1,2,3},{1,2,3}};
    printf("%d",iloczyn(3,3,tab));
    return 0;
}
