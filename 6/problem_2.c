#include <stdio.h>
int main() {
	int i;
	int avg;
    avg = 0; // 指摘1_avg初期化漏れ
	int num[5] = {70, 83, 100, 33, 89};
	for (i = 0; i < 5; i++) {   //指摘2_0とoのタイプミス 指摘3_ループ上限のミス
		avg += num[i];  //指摘4_セミコロン漏れ
	}
	avg /= 5;   //指摘5_全角スペース
	printf("平均 = %d\n",avg);
	return 0;
}
