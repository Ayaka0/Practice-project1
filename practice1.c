#include<stdio.h>

int main(void)
{
	int retry; //�����𑱂��邩

	do {
		int no;

		printf("��������͂���");
		scanf("%d", &no);

		if (no == 0)
			printf("���̐��͂O�ł�\n");
		else if (no > 0)
			printf("���̐��͐��ł�\n");
		else
			printf("���̐��͕��ł��B\n");

		printf("������x�H�yyes �c0 / no�c9�z:");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}