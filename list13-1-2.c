//�C�ӂ̃t�@�C���̒��g����������

#include<stdio.h>

//���O��filename�ł���t�@�C���̒��g������
int ferase(const char* filename)
{
	FILE* fp;

	if ((fp = fopen(filename, "w")) == NULL)
		return 0;
	fclose(fp);
	return 1;
}

int main(void)
{
	FILE* fp;
	char fname[256];

	printf("���g����������t�@�C�����F");
	scanf("%s", fname);

	if (ferase(fname))
		printf("���̃t�@�C���̒��g���������܂����B\n");
	else
		printf("���̃t�@�C���̒��g�͏����ł��܂���ł����B\n");

	return 0;
}