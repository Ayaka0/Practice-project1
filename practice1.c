#include<stdio.h>

#define NUMBER 50 //�z��a�̗v�f��

int main(void)
{
	int num;
	int a[NUMBER]; //�f�[�^���̐錾

	printf("�f�[�^���F");
	do
	{
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("1�`%d�œ��͂��Ă��������F", NUMBER);
	} while (num < 1 || num > NUMBER);

	int i;
	for (i = 0; i < num; i++)
	{
		printf("%2d�ԁF", i + 1);
		scanf("%d", &a[i]);
	}

	printf("{");
	for (i = 0; i < num - 1; i++)
		printf("%d, ", a[i]);

	printf("%d}\n", a[num - 1]);

	return 0;

}

