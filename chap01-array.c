//�z��̗v�f���Ɗe�v�f�̒l��\��

#include<stdio.h>

int main(void) {
	int a[] = { 1,2,3,4,5 }; //�z��a�̏�����
	int na = sizeof(a) / sizeof(a[0]); //�v�f��, saizeof(a)�͔z��S�̂̑傫��, sizeof(a[0])�͗v�f�̑傫��

	printf("�z���a�̗v�f����%d�ł��B\n", na);

	int i; //�J�E���g�̕ϐ��錾
	for (i = 0; i < na; i++) //�v�f���̌J��Ԃ�����
		printf("a[%d] = %d\n", i, a[i]);
	
	return 0;
}