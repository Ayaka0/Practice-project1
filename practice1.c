#include<stdio.h>

int main(void)
{
	int n1, n2;

	puts("3つの整数を入力せよ");
	printf("整数１："); scanf("%d", &n1);
	printf("整数２："); scanf("%d", &n2);

	if (n1 - n2 >10 || n2 - n1 > 10)
		printf("それらの差は11以上です。\n");
	else 
		printf("それらの差は10以下です\n");
	

	return 0;
}