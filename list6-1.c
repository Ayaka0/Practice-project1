#include<stdio.h>

int calculateSum(int n)
{
	int sum = 0; //和を格納する変数

	int i;
	for (i = 1; i <= n; i++) {
		sum += i; //iをsumに加算
	}
	return sum;
}
int main(void)
{
	int n;
	printf("整数nを入力：");
	scanf("%d", &n);

	int result = calculateSum(n);
	printf("１から%dまでの全整数の和は%dです。\n", n, result);

	return 0;

}