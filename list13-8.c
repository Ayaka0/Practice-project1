//�t�@�C���̒��g����ʂɕ\�����Ȃ���R�s�[����

#include<stdio.h>
int main(void)
{
	FILE* sfp; //�R�s�[���t�@�C��
	FILE* dfp; //�R�s�[��̃t�@�C��
	char sname[FILENAME_MAX]; //�R�s�[���̃t�@�C����
	char dname[FILENAME_MAX]; //�R�s�[��̃t�@�C����

	printf("�R�s�[���t�@�C�����F"); scanf("%s", sname);
	printf("�R�s�[��t�@�C�����F"); scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)
		printf("�R�s�[���t�@�C�����I�[�v���ł��܂���B\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)
			printf("�R�s�[��t�@�C�����I�[�v���ł��܂���B\n");
		else {
			int ch; while ((ch = fgetc(sfp)) != EOF) {
				fputc(touuper(ch), dfp);
				//putchar(ch); //��ʂɏo��
				fputc(ch, dfp);
			}
			fclose(dfp); //�R�s�[����N���[�Y
		}
		fclose(sfp); //�R�s�[�����N���[�Y
	}
	return 0;
}