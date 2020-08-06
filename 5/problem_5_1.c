//入力チェックは省略
#include <stdio.h>

int main(void){
    int i;
    int j;
    int k;
    int length;
    int target_num;
    int nums[10];
    //定数
    length = 10;
    target_num = 2;

    printf("%d個の整数を入力してください。\n", length);
    printf("%d番目に大きい数字を返します。\n", target_num);
    printf("==============================\n");

    for (i=0; i<length; i++){
        printf("%d番目の数値を入力してください\n", i+1);
        scanf("%d", &nums[i]);
    }

    //バブルソート降順
    for (j=0; j<length-1; j++){
        for (k=j+1; k<length; k++){
            if (nums[j] < nums[k]){
                int tmp = nums[j];
                nums[j] = nums[k];
                nums[k] = tmp;
            }
        }
    }

    printf("%d番目に大きい数字 : %d\n", target_num, nums[target_num - 1]);
    return 0;
}
