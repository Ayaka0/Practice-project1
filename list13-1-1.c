//�C�ӂ̃t�@�C���̑��݂��`�F�b�N
#include<stdio.h>

int main(void)
{
	FILE* fp;
	char fname[256];

	printf("�t�@�C����");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fp == NULL)
		printf("���̃t�@�C���͑��݂��܂���B\n");
	else {
		printf("���̃t�@�C���͑��݂��܂��B\n");
		fclose(fp); //�t�@�C�����N���[�Y
	}
	return 0;
}