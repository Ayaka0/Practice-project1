#include<stdio.h>

int main(void) {

	int no; //int型変数no

	printf("正の整数を入力する;");
	scanf("%d", &no);

	if (no > 0) {
		while (no > 0) {
			printf("%d ", no);
			no--;	//noデクリメント
		}
		printf("\n");
	}

	return;

}