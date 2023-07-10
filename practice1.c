#include<stdio.h>

int main(void) {

	int no; //int型変数no

	printf("正の整数を入力する;");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 2; //カウントアップ用に必要な変数
		while (i <= no) {
			printf("%d ", i);
			i *= 2;//iの値を表示した後にインクリメント
		}
		printf("\n");
	}
	return;

}