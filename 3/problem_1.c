#include <stdio.h>

int sum(min, max)
{
    int i;
    int num;

    num = 0;

    for (i = min; i <= max; i++) {
        num += i;
    }
    return num;
}

int main (void)
{
    int min;
    int max;
    int i;
    int result;

    min = 1;
    max = 10;
    result = sum(min, max);

    printf("%d~%dの和:%d\n", min, max, result);
    return 0;
}
