//�g���Ƒ̏d��ǂݍ���ŕ��ϒl�����߂ăt�@�C���ɏ�������
#include<stdio.h>
#include<string.h>

#define NAME_LEN 100

int main(void)
{
	FILE* fp;

	if ((fp = fopen("hw2.dat", "w")) == NULL)
		printf("�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		char name[NAME_LEN];
		double height;
		double weight;

		int i;
		for (i = 0; ; i++) {
			int flag;
			printf("%d�l�ڂ̃f�[�^����͂��܂����H�͂��c1 / �I���c0\n", i + 1);
			scanf("%d", &flag);
			if (flag == 0) break;

			printf("���O�F"); scanf("%s", name);
			printf("�g���F"); scanf("%lf", &height);
			printf("�̏d�F"); scanf("%lf", &weight);
			fprintf(fp, "%s %f %f\n", name, height, weight);
		}
		fclose(fp);
	}

	return 0;
}