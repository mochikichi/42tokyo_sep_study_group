//入力チェックは省略
#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int length;
    int n;
    length = 20; 
    int count[10] = {};
    i = 0;

    printf("０〜９までの整数値が%d個入力されたとき、それぞれが入力された回数を出力します\n", n);
    printf("==============================\n");
    do {
        printf("%d番目の数値を入力してください\n", i+1);
        scanf("%d", &n);
        count[n - 1] += 1;
        i++;
    } while (i < length);

    for (j=0; j<9; j++) {
        printf("%d : %d回\n", j+1, count[j]);
    }

    return 0;
}
