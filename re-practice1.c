#include<stdio.h>

int main(void)
{
	int no;

	printf("���̐��������");
	scanf("%d", &no);

	while (no <= 10) {
		printf("%d", no);
		no++;
	}
	printf("\n");

	return 0;


}