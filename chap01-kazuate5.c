//�����ăQ�[���i���̂T�F���͗�����\���j
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_STAGE 10 //�ő����

int main(void)
{
	srand(time(NULL)); //�����̎��ݒ�

	int ans = rand() % 1000; //0�`999�̗����𐶐�
	int no; //�ǂݍ��񂾒l

	int num[MAX_STAGE]; //�ǂݍ��񂾒l�̗���
	int stage = 0; //���͂�����

	printf("0�`999�̐����𓖂Ă悤�I\n");

	do {
		printf("�c��%d��B�������ȁF", MAX_STAGE - stage);
		scanf_s("%d", &no);
		num[stage++] = no; //�ǂݍ��񂾒l��z��Ɋi�[

		if (no > ans)
			printf("�����Ə�������B\n");
		else if (no < ans)
			printf("�����Ƒ傫����B\n");
	} while (no != ans && stage < MAX_STAGE);

	if (no != ans)
		printf("�c�O�B������%d�ł����B\n", ans);
	else {
		printf("�����ł��B\n");
		printf("%d��œ�����܂����ˁB\n", stage);
	}

	puts("\n--- ���͗��� ---");
	int i;
	for (i = 0; i < stage; i++)
		printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);

	return 0;
}