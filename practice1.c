#include<stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力せよ：");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 1;
		printf("{");
		while (i < no)  //1からno-1までを表示
			printf("%d,", i++);
			printf("%d}\n", no); //noを表示
	}

	return 0;
}