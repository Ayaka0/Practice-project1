//�~�����̒l���e�L�X�g�t�@�C���ɏ�������œǂݎ��

#include<stdio.h>

int main(void)
{
	FILE* fp;
	double pi = 3.14159265358979323846;

	printf("�ϐ�pi������o�����~������%23.21f�ł��B\n", pi);

	//�t�@�C���ւ̏�������
	if ((fp = fopen("PI.txt", "w")) == NULL)
		printf("�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		fprintf(fp, "%f", pi); //pi����������
		fclose(fp); //�N���[�Y
	}

	//�t�@�C������̓ǂݎ��
	if ((fp = fopen("PI.txt", "r")) == NULL)
		printf("�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		fscanf(fp, "%lf", &pi);
		printf("�t�@�C������ǂݎ�����~������%23.21f�ł��B\n", pi);
		fclose(fp);
	}
	return 0;
}