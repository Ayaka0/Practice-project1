#include<stdio.h>

int main(void)
{

	int retry;

	do {
		int no;
		printf("��������͂���");
		scanf("%d", &no);

		if (no == 0)
			puts("���̐��͂O�ł�");
		else if (no > 0)
			puts("���̐��͐��ł�");
		else
			puts("���̐��͕��ł�");

		printf("again? yes: 0 / No: 1");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;


}