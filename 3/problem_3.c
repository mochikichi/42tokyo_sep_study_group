#include <stdio.h>

int recursion(n)
{
    if (n == 0) {
        return 0;
    }
    return n + recursion(n - 1);
}

int main (void)
{
    int n;

    n = 10;

    printf("和:%d\n", recursion(n));
    return 0;
}
