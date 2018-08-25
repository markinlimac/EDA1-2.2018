#include <stdio.h>
#include <stdlib.h>

int euclides(int a, int b);

int main()
{
    int n;

    scanf("%d &d", &a, &b);

    printf("%d\n", euclides(a, b));

return 0;
}

int euclides(int a, int b)
{
    int q,r;

    q = a/b;
    r = a%b;

    a = b;
    b = r;

    if(b == 0)
        return a;
    else
        return euclides(a, b);

}
