#include<stdio.h>

int main(void)
{
	int a[5]; //�R�s�[���z��
	int b[5]; //�R�s�[��z��

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++)
		b[i] = a[i];

	puts("   a    b");
	puts("---------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);


	return 0;
}