#include<stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ：");
	scanf("%d", &no);

	if (1 <= no) {
		while (no >= 1)
			printf("%d", no--);
		printf("\n");
	}
	else {
		printf("改行しません");
	}

	return 0;
}