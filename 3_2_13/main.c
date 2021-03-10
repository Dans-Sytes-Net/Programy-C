#include <stdio.h>
#include <stdlib.h>

void foo()
{
    static int n=5; // usuñ static
    n++;
    printf("%i",n);
}

int main()
{
    foo();
    foo();
    foo();
    foo();
    foo();
    const a=5;
    //a++;
    printf("%i",a);
    return 0;
}
