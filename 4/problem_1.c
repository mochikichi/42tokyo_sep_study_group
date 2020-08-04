#include <stdio.h>

int main (void)
{
    int arr[5];
    int i;
    int sum;

    sum = 0;

    printf("半角スペースで区切られた5つの整数を入力してください\n");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    for (i=0; i<5; i++) {
        sum += arr[i];
    }

    printf("和の1の位:%d\n", sum % 10);
    return 0;
}
