//�����ăQ�[���i���̂R�F���Ă����鐔��-999�`999�̗����j

#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_STAGE 10

int main(void)
{
	srand(time(NULL)); //�����̎��ݒ�

	
	int ans = rand() % 1999 - 999; //-999�`999�̗����𐶐�
	int no; //�ǂݍ��񂾒l

	int num[MAX_STAGE];
	int stage = 0;

	printf("-999�`999�̐����𓖂Ă悤�I\n\n");

	do {
		printf("�c��%d��B�������ȁF", MAX_STAGE - stage);
		scanf_s("%d", &no);
		num[stage++];

		if (no > ans)
			printf("�����Ə�������B\n");
		else if (no < ans)
			printf("�����Ƒ傫����B\n");
	} while (no != ans && stage < MAX_STAGE); //������܂ŌJ��Ԃ�

	printf("�����ł��B\n");

	return 0;
}