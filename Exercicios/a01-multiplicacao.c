#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", multiplicacao(a, b));

return 0;
}

int multiplicacao(int a, int b)
{
    if(b == 1)
        return a;
    else
        return multiplicacao(a, (b - 1)) + a;
}

//int result;
//result = (b == 1 ? return a : n(a, b - 1) + a); OPERADOR TERNARIO
