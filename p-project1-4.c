//�����̐����i���̂P�j

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("���̏����n�ł�0�`%d�̗����������ł��܂��B\n", RAND_MAX);

	int retry; //������x�H

	do {
		printf("\n����%d�𐶐����܂����B\n", rand()); //0�`RAND_MAX�̗����𐶐����ĕԋp

		printf("������x�H�c1�c������ 0�c�͂�");
		scanf_s("%d", &retry);
	} while (retry == 0);

	return 0;
}