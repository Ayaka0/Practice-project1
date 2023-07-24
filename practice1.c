#include<stdio.h>

int main(void)
{
	int len;

	printf("ピラミッド：");
	scanf("%d", &len);

	int i,j;
	for (i = 1; i <= len; i++) {
		for (j = 1; j <= len - i; j++)
			putchar(' ');
		for (j = 1; j <= 2 * i - 1; j++)
			putchar('*');
		putchar('\n');
	}


	return 0;

}

