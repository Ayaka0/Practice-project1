//�t�@�C�����̉��s�����̌����J�E���g����

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
		int n_count = 0; //���s�����̏o����

		while ((ch = fgetc(fp)) != EOF)
			if (ch == '\n')
				n_count++;
			//putchar(ch);
		fclose(fp);
		printf("���̃t�@�C����%d�s�ł��B\n", n_count);
	}

	return 0;
}