//配列の要素数と各要素の値を表示

#include<stdio.h>

int main(void) {
	int a[] = { 1,2,3,4,5 }; //配列aの初期化
	int na = sizeof(a) / sizeof(a[0]); //要素数, saizeof(a)は配列全体の大きさ, sizeof(a[0])は要素の大きさ

	printf("配列のaの要素数は%dです。\n", na);

	int i; //カウントの変数宣言
	for (i = 0; i < na; i++) //要素数の繰り返し処理
		printf("a[%d] = %d\n", i, a[i]);
	
	return 0;
}