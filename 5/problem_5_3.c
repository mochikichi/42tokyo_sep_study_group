#include <stdio.h>

void switch_nums(int *a, int *b);

int main(void)
{
    int a;
    int b;
    a = 3;
    b = 5;

    printf("Before: a:%d b:%d\n", a, b);

    switch_nums(&a, &b);

    printf("After: a:%d b:%d\n", a, b);
    return 0;
}

void switch_nums(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}
