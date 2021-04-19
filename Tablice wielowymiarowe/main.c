#include <stdio.h>

int *foo(int n , int m)
{
	return malloc(n*(m*sizeof(int)));
}

int main()
{
	/*int **tab = (int**) foo(3,4);
	for(int i=0;i<12;i++){
        *(tab+i)=i;
        //printf("%d\n",*(tab+i));
	}*/
	int tab2[6][5];
	for(int x=1;x<=6;x++){
        for(int y=1;y<=6;y++)
        {
            tab2[x-1][y-1]=y*x;
        }
	}
	for(int x=0;x<6;x++){
        for(int y=0;y<6;y++)
        {
            printf("%d ",tab2[x][y]);
        }
        printf("\n");
	}
	for(int i=0;i<6;i++){
        printf("X %d\n",tab2[i]);
            for(int o=0;o<5;o++){
                printf("  Y %d\n",&tab2[i][o]);
            }
	}

}
