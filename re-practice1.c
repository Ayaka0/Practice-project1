#include<stdio.h>

int main(void)
{

	int no;

	printf("正の整数を入力；");
	scanf("%d", &no);

	if (no < 0)
		return (0);

	while (no >= 0) {
		printf("%d", no);
		no--;
	}
	putchar('\n');

	return 0;


}