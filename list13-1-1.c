//�C�ӂ̃t�@�C���̑��݂��`�F�b�N
#include<stdio.h>

int fexist(const char* filename)
{
	FILE* fp;

	if ((fp = fopen(filename, "r")) == NULL)
		return 0;
	fclose(fp);
	return 1;
}


int main(void)
{
	FILE* fp;
	char fname[256];

	printf("�t�@�C����");
	scanf("%s", fname);

	fp = fopen(fname, "r");

	if (fexist(fname))
		printf("���̃t�@�C���͑��݂��܂��B\n");
	else {
		printf("���̃t�@�C���͑��݂��܂���B\n");
		//fclose(fp); //�t�@�C�����N���[�Y
	}
	return 0;
}