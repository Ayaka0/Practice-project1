//�t�@�C�����̐��������̌����J�E���g����

#include<stdio.h>

int main(void)
{
	FILE* fp;
	char fname[FILENAME_MAX]; //�t�@�C����

	printf("�t�@�C�����F");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL) //�I�[�v��
		printf("�t�@�C�����I�[�v���ł��܂���B");
	else {
		int ch;
		int cnt[10] = { 0 }; //�����̏o����

		while ((ch = fgetc(fp)) != EOF)
			if (ch >= '0' && ch <= '9')
				cnt[ch - '0']++;
		fclose(fp); //�N���[�Y

		puts("���������̏o����");
		int i;
		for (i = 0; i < 10; i++)
			printf("'%d': %d\n", i, cnt[i]);
	}

	return 0;
}