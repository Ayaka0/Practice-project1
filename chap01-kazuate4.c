//�����ăQ�[���i���̂S�F���͉񐔂ɐ�����݂���j

#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	srand(time(NULL)); //�����̎��ݒ�

	const int max_stage = 10; //�ő���͉�
	int remain = max_stage; //�c�艽����͂ł��邩�H

	int ans = rand() % 1000; //0����999�̗����𐶐�
	int no; //�ǂݍ��񂾒l

	printf("0�`999�̐����𓖂Ă悤\n\n");

	do {
		printf("�c��%d��B�������ȁF", remain);
		scanf_s("%d", &no);
		remain--; //�c��񐔃f�N�������g

		if (no > ans)
			printf("�����Ə�������\n");
		else if (no < ans)
			printf("�����Ƒ傫����\n");
	} while (no != ans && remain > 0);

	if (no != ans)
		printf("�c�O�B������%d�ł����B\n", ans);
	else {
		printf("�����ł��B\n");
		printf("%d��ł�����܂����ˁB", max_stage - remain);
	}

	return 0;
}