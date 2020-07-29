//文字列の入力は考慮していない
//1回も入力せずにctl+dで抜けた場合は考慮していない

#include <stdio.h>

int main(void)
{
    int i;
    double n;
    double sum;
    double mul;
    double avg;

    i = 0;
    sum = 0;
    mul = 1;
    avg = 0;

    printf("任意の個数の数字を入力してください。\n");
    printf("1つ目の数字を入力してください\n");

    while (scanf("%lf", &n)!= EOF) {
        printf("%dつ目の数字を入力してください\n", i + 2);
        sum += n;
        mul *= n;
        i ++;
    }

    avg = sum / i;

    //小数点第1位までとする
    printf("和は%.1fです。\n", sum);
    printf("積は%.1fです。\n", mul);
    printf("平均は%.1fです。\n", avg);
    return 0;
}
