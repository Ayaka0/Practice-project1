#include<stdio.h>

int main(void)
{
	int no;

	printf("���̐�������͂���F");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 1;
		printf("{");
		while (i < no)  //1����no-1�܂ł�\��
			printf("%d,", i++);
			printf("%d}\n", no); //no��\��
	}

	return 0;
}