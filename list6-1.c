#include<stdio.h>

int calculateSum(int n)
{
	int sum = 0; //�a���i�[����ϐ�

	int i;
	for (i = 1; i <= n; i++) {
		sum += i; //i��sum�ɉ��Z
	}
	return sum;
}
int main(void)
{
	int n;
	printf("����n����́F");
	scanf("%d", &n);

	int result = calculateSum(n);
	printf("�P����%d�܂ł̑S�����̘a��%d�ł��B\n", n, result);

	return 0;

}