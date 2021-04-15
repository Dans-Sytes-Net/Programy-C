#include <stdio.h>
#include <stdlib.h>

void podmien(char napis[])
{
    int i=0;
    while(*(napis+i)!=0){
        int int_napis = napis[i];
        if(int_napis>=97 && int_napis<=122)
        {
            napis[i]=(char)(int_napis-32);
        }
        i++;
    }
}

int main()
{
    char nap[] = "Hello9876;[]][";
    podmien(nap);
    printf("%s\n",nap);
    return 0;
}
