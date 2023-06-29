#include<stdio.h>

int main(void)
{
	int no;

	printf("点数：");
	scanf("%d", &no);

	if (no > 100|| no < 0)
		printf("不正な点数");
	else if (no < 60)
		printf("不可");
	else if (no < 70)
		printf("可");
	else if (no < 80)
		printf("良");
	else
		printf("優");

	return 0;
}