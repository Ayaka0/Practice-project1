#include<stdio.h>

int scan_int(void)
{
	int tmp;

	printf("�����l�F");
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
		printf("n1��n2�̕��ϒl�̓[���ł��B\n");
	else if (ave > 0)
		printf("n1��n2�́����ϒl�͐��Œl��%d�ł��B\n", ave);
	else
		printf("n1��n2�̕��ϒl�͕��Œl��%d�ł��B\n", ave);

	if ((ave = ave_of(n1, n3)) == 0)
		printf("n1��n3�̕��ϒl�̓[���ł��B\n");
	else if (ave > 0)
		printf("n1��n3�́����ϒl�͐��Œl��%d�ł��B\n", ave);
	else
		printf("n1��n3�̕��ϒl�͕��Œl��%d�ł��B\n", ave);

	if ((ave = ave_of(n2, n3)) == 0)
		printf("n2��n3�̕��ϒl�̓[���ł��B\n");
	else if (ave > 0)
		printf("n2��n3�́����ϒl�͐��Œl��%d�ł��B\n", ave);
	else
		printf("n2��n3�̕��ϒl�͕��Œl��%d�ł��B");
	return 0;
}