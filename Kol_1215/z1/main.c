#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wybor;
    printf("Kalkulator\n");
    printf("1.Dodawanie:\n");
    printf("2.Odejmowanie:\n");
    printf("3.Mno¿enie:\n");
    printf("4.Dzielenie:\n");
    scanf("%d",&wybor);
    switch(wybor)
    {
        case 1:
        {
        int x,y;
        scanf("%d %d", &x,&y);
        printf("Wynik=%d\n",x+y);
        break;
        }
        case 2:
        {
        int x,y;
        scanf("%d %d", &x,&y);
        printf("Wynik=%d\n",x-y);
        break;
        }
        case 3:
        {
        int x,y;
        scanf("%d %d", &x,&y);
        printf("Wynik=%d\n",x*y);
        break;
        }
        case 4:
        {
        int x,y;
        scanf("%d %d",&x,&y);
        if(y==0) return 0;
        printf("Wynik=%d\n",x/y);
        break;
        }
    }
return 0;
}
