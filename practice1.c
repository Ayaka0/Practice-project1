#include<stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂���F");
	scanf("%d", &no);

	if (1 <= no) {
		while (no >= 1)
			printf("%d", no--);
		printf("\n");
	}
	else {
		printf("���s���܂���");
	}

	return 0;
}