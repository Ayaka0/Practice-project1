#include<stdio.h>

int main(void)
{
	int retry;

	do {
		int no;
		printf("��������́G");
		scanf("%d", &no);

		if (no % 2)
			puts("���̐��͊�ł�");
		else
			puts("���̐��͋����ł�");

		printf("������x�H�yyes - 0 / No - 1�z:");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;


}