#include<stdio.h>
//サブ関数
int sub1(int a,int b){
    int c;
    c = a + b;
    printf("I'm %dyears old.\n",c);
}
//メイン関数
int main(void){
    printf("HelloWorld\n");
    int a = 20;
    int b = 1;
    sub1(a,b);
    return 0; 
}

//解説
//実行処理
//1.メイン関数main(void)が呼び出さる
//2.メイン関数の中の「printf」を処理
//3.メイン関数の中で変数a,bに対して値(a=20, b=1)を代入
//4.メイン関数の中でサブ関数sub(int a, int b)を呼び出して、サブ関数に引数a,bを渡す
//5.サブ関数でメイン関数から受け取った引数をもとに計算した結果を変数cに代入
//6.サブ関数の「printf」を処理（パラメータ%dに変数cを代入）
