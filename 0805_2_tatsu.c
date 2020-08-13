#include<stdio.h>

int main(void){
    int input[20]; 
    int cycle = sizeof(input)/sizeof(input[0]); /*繰り返し回数の宣言*/
    static int zero[],one[],two[],three[],four[],five[],six[],seven[],eight[],nine[];
    /*20個の数値の入力*/
    for(int i = 0; i < cycle; i++){
        scanf("%d",&input[i]);
    }
    /*配列の数値のカウント*/
    for(int i = 0; i < cycle; i ++){
        switch (input[i])
        {
        case 0:
            zero[i] = 1;
            break;
        
        default:
            break;
        }
    }
    printf("%d",sizeof(&zero) / sizeof(&zero[0]));
}