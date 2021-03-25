#include <stdio.h>

void foo()
{
    static int n=5; // usuñ static
    n++;
    printf("%i\n",n);
}

int main()
{
    const int stala=2; // -- deklaracja sta³ej
    //stala++; -- nie mo¿na modyfikowaæ zmiennych sta³ych (const)
    foo();
    foo();
    foo();
    foo();
    foo();
    // w momencie wykonywania funkcji foo() wartoœæ zmiennej lokalnej funkcji zmienia siê o 1 i jest zapisywane
    // przy usiniêciu "static" wartoœæ zmiennej nie bêdzie zachowana i wynikiem zawsze bêdize 6
    return 0;
}
