//�t�@�C���̒��g��\������

#include<stdio.h>

int main(void)
{
	FILE* fp;
	char fname[FILENAME_MAX]; //�t�@�C����

	printf("�t�@�C�����F");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		int ch;
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);
		fclose(fp);
	}

	return 0;
}