#include<stdio.h>

int main(void)
{
	int n; //�����l�̐錾

	printf("�����l�F");
	scanf("%d", &n);

	int i;
	int count = 0;

	for (i = 1; i <= n; i++)
		if (n % i == 0) {
			printf("%d\n", i);
			count++;
		}
	printf("�񐔂�%d�ł��B", count);

	return 0;

}

