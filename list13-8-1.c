//�~�����̒l���o�C�i���t�@�C���ɏ�������œǂݎ��

#include<stdio.h>

int main(void)
{
	FILE* fp;
	double pi = 3.14159265358979323846;

	printf("�ϐ�pi������o�����~������%23.21f�ł��B\n", pi);

	//��������
	if ((fp = fopen("PI.bin", "wb")) == NULL)
		printf("�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);
		fclose(fp);
	}

	//�ǂݎ��
	if ((fp = fopen("PI.bin", "rb")) == NULL)
		printf("�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		fread(&pi, sizeof(double), 1, fp);
		printf("�t�@�C������ǂݎ�����~������%23.21f�ł��B\n", pi);
		fclose(fp);
	}
	return 0;
}