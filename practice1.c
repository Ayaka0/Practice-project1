#include<stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂���F");
	scanf("%d", &no);

	while (no >= 0) {
		printf("%d", no);
		no--;

	}
	
	return 0;
}