## 問題1

出典：[atcoder abc086_a](https://atcoder.jp/contests/abc086/tasks/abc086_a)

### 問題
a, b が与えられます。 a と b の積が偶数か奇数か判定してください。

### 制約

1≤a,b≤10000  
a, b は整数

### 数値例
1)
a=3
b=4
答え: Even

3 × 4 = 12 でこれは偶数なので、"Even" を出力します。

2)
a=1
b=21
答え: Odd

1 × 21 = 21 でこれは奇数なので、"Odd" を出力します。

## 問題2

後輩くんからメッセージが届きました。<br>
「せんぱ〜い、下の問題解いてみたんですけど〜なんかうごきませ〜ん。教えて下さ〜い」<br>
心優しき先輩のあなたはコードレビューをすることにしました。<br>
1_まず、プログラムを実行せずにコードを見るだけで間違いを見つける。<br>
2_そのあと、実際にプログラムを実行して間違いを見つける。<br>
3_正しいコードに修正してあげる。<br>

### 仕様
本プログラムは、5人分の国語テストの点数から平均点を求め、コンソールに表示するプログラムである。<br>
5人分の国語の点数の平均点を整数型（int型）で算出する。なお、使用するデータは、下記のとおりである。また、平均点は、コンソールに整数型（int型）で表示すること。

A : 70, B : 83, C : 100, D : 33, E : 89

```c
#include <stdio.h>
int main() {
	int i;
	int avg;
	int num[5] = {70, 83, 100, 33, 89};
	for (i = o; i <= 5; i++) {
		avg += num[i]
	}
	avg /= 5;　
	printf("平均 = %d\n",avg);
	return 0;
}
```

## 問題3

出典：[atcoder abc085c](https://atcoder.jp/contests/abc085/tasks/abc085_c)

### 問題

10000 円札と、5000 円札と、1000 円札が合計で NN 枚あって、合計金額が YY 円であったという。このような条件を満たす各金額の札の枚数の組を 1 つ求めなさい。そのような状況が存在し得ない場合には -1 -1 -1 と出力しなさい。

### 制約

1≤N≤2000  
1000≤Y≤2∗10^7  
N は整数  
Y は 1000 の倍数

### 数値例】
1)
N=9  
Y=45000  
答え: (4,0,5) など

10000 円札 4 枚と 1000 円札 5 枚で、合計枚数が 9 枚、合計金額が 45000 円になります。他の答えもあります。