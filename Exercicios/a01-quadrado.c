#include <stdio.h>
#include <stdlib.h>

int quadrado(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", quadrado(n));

return 0;
}

int quadrado(int n)
{
    if(n == 1)
        return 1;
    else
        return quadrado(n*n) + fibonacci(n - 2);

}
