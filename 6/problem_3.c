#include <stdio.h>

int main(void)
{
    int N;
    int Y;
    int i;
    int j;
    int k;
    int total;

    printf("お札の枚数N 及び 合計金額(1000の倍数)Y を入力してください\n");
    printf("入力形式：N Y\n");
    scanf("%d %d", &N, &Y);

    for (i = 0; i <= N; i++) {
        for (j = 0; j <= (N - i); j++) {
            k = N - i - j;
            total = 10000 * i + 5000 * j + 1000 * k;
            if (total == Y) {
                printf("%d %d %d\n", i, j, k);
                return 0;
            }
        }
    }

    printf("%d %d %d\n", -1, -1, -1);
    return 0;
}
