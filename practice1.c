#include<stdio.h>

int main(void)
{
	int month;

	printf("何月ですか：");
	scanf("%d", &month);

	switch (month) {
	case 1: puts("1月は冬です"); break;
	case 2: puts("2月は冬です"); break;
	case 3: puts("3月は春です"); break;
	case 4: puts("4月は春です"); break;
	case 5: puts("5月は春です"); break;
	case 6: puts("6月は夏です"); break;
	case 7: puts("7月は夏です"); break;
	case 8: puts("8月は夏です"); break;
	case 9: puts("9月はあきです"); break;
	case 10: puts("10月はあきです"); break;
	case 11: puts("11月は秋です"); break;
	case 12: puts("12月は冬です"); break;
	default: puts("そんな月はありません。");
	}

	return 0;
}