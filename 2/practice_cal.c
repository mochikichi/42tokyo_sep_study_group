#include<stdio.h>

int main(void)
{
	int a,b,c,d;

	printf("1～10までの整数を2つ入力してください。\n");
	printf("1つ目の整数を入力してください。＞");
	scanf("%d",&a);
	printf("2つ目の整数を入力してください。＞");
	scanf("%d",&b);

	if(( 1 <= a && a <= 10) && ( 1 <= b && b <= 10)){
		c = a + b;
		printf("和は%dです。\n",c);
		d = a * b;
		printf("積は%dです。\n",d);
		return(0);

	}

	else if((a <= 0 || 10 < a) && ( 1 <= b && b <= 10)){
		printf("1つ目に1～10以外が入力されています。");

	}

	else if(( 1 <= a && a <= 10) && (b <= 0 || 10 < b)){
		printf("2つ目に1～10以外が入力されています。");

	}

	else{
		printf("1～10以外が入力されています。\n");
		
	}

	return 0;
	
}