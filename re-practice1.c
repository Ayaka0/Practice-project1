#include<stdio.h>

int main(void)
{
	int no;

	printf("正の整数を入力");
	scanf("%d", &no);

	while (no <= 10) {
		printf("%d", no);
		no++;
	}
	printf("\n");

	return 0;


}