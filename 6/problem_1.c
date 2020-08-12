#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("aとbの積が偶数か奇数か判定します\n");
    printf("a及びbを入力してください\n");
    printf("入力形式：a b\n");
    scanf("%d %d", &a, &b);

    if (a * b % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}
