#include<stdio.h>

int main(void)
{
	int month;

	printf("�����ł����F");
	scanf("%d", &month);

	switch (month) {
	case 1: puts("1���͓~�ł�"); break;
	case 2: puts("2���͓~�ł�"); break;
	case 3: puts("3���͏t�ł�"); break;
	case 4: puts("4���͏t�ł�"); break;
	case 5: puts("5���͏t�ł�"); break;
	case 6: puts("6���͉Ăł�"); break;
	case 7: puts("7���͉Ăł�"); break;
	case 8: puts("8���͉Ăł�"); break;
	case 9: puts("9���͂����ł�"); break;
	case 10: puts("10���͂����ł�"); break;
	case 11: puts("11���͏H�ł�"); break;
	case 12: puts("12���͓~�ł�"); break;
	default: puts("����Ȍ��͂���܂���B");
	}

	return 0;
}