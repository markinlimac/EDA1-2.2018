#include <stdio.h>
#include <stdlib.h>

int hanoi(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", fibonacci(n));

return 0;
}

int hanoi(int n)
{
    if(n == 1)
        return n;
    else
        return hanoi(n - 1) + hanoi(n - 2);

}
