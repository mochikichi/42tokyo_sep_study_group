#include <stdio.h>
//課題1
// 「forを使用し、1～10の和の計算結果をターミナルに表示させる。」
//     1+2+...+9+10=?
int f(void)
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    return sum;
}
//課題3
// 「再帰関数を使用し、1～10の和の計算結果をターミナルに表示させる。」
int g(int n, int acc)
{
    if (n == 0)
    {
        return acc;
    }
    return g(n - 1, acc + n);
}

int h(int n)
{
    return g(n, 0);
}

int main(void)
{
    printf("%d\n", f());
    printf("%d\n", h(10));
    return 0;
}
