#include<stdio.h>

int main(void)
{
	int retry; //処理を続けるか

	do {
		int no;

		printf("整数を入力せよ");
		scanf("%d", &no);

		if (no == 0)
			printf("その数は０です\n");
		else if (no > 0)
			printf("その数は正です\n");
		else
			printf("その数は負です。\n");

		printf("もう一度？【yes …0 / no…9】:");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}