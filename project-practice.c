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

	int count = 0; //�R�s�[�����v�f��
	for (i = 0; i < 5; i++)
		if (a[i] > 0)	//���ł����
			b[count++] = i; //�R�s�[


	printf("���̗v�f��%d�ł��B\n", count);

	for (i = 0; i < count; i++)
		printf("b[%d] = %d    a[%d] = %d\n", i, b[i], b[i],a[b[i]]);


	return 0;
}