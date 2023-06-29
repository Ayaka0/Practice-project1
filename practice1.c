#include<stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("3つの整数を入力せよ");
	printf("整数１："); scanf("%d", &n1);
	printf("整数２："); scanf("%d", &n2);
	printf("整数３："); scanf("%d", &n3);

	if (n1 == n2 && n2 == n3)
		printf("3つの値が等しい");
	else if (n1 == n2 || n2 == n3 || n1 == n3)
		printf("2つの値が等しい");
	else 
		printf("3つとも値は異なります");
	

	return 0;
}