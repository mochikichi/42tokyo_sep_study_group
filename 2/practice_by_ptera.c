#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("1～10までの整数を2つ入力してください。\n");

    printf("1つ目の整数を入力してください\n");
    scanf("%d", &a);
    while(a < 1 || a > 10){
        printf("1~10の整数以外が入力されました\n");
        printf("1つ目の整数を入力してください\n");
        scanf("%d", &a);
    }

    printf("2つ目の整数を入力してください\n");
    scanf("%d", &b);
    while(b < 1 || b > 10){
        printf("1~10の整数以外が入力されました\n");
        printf("2つ目の整数を入力してください\n");
        scanf("%d", &b);
    }

    printf("和は%dです。\n", a + b);
    printf("積は%dです。\n", a * b);
    return 0;
}
