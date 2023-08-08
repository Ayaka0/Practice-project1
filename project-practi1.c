#include<stdio.h>

int scan_int(void)
{
	int tmp;

	printf("整数値：");
	scanf("%d", &tmp);

	return tmp;
}

int ave_of(int a, int b)
{
	return (a + b) / 2;
}

int main(void)
{
	int n1 = scan_int();
	int n2 = scan_int();
	int n3 = scan_int();
	int ave;

	if ((ave = ave_of(n1, n2)) == 0)
		printf("n1とn2の平均値はゼロです。\n");
	else if (ave > 0)
		printf("n1とn2の￥平均値は正で値は%dです。\n", ave);
	else
		printf("n1とn2の平均値は負で値は%dです。\n", ave);

	if ((ave = ave_of(n1, n3)) == 0)
		printf("n1とn3の平均値はゼロです。\n");
	else if (ave > 0)
		printf("n1とn3の￥平均値は正で値は%dです。\n", ave);
	else
		printf("n1とn3の平均値は負で値は%dです。\n", ave);

	if ((ave = ave_of(n2, n3)) == 0)
		printf("n2とn3の平均値はゼロです。\n");
	else if (ave > 0)
		printf("n2とn3の￥平均値は正で値は%dです。\n", ave);
	else
		printf("n2とn3の平均値は負で値は%dです。");
	return 0;
}