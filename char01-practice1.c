//���݂���

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
	//���݂����̌��ʂ�z��Ɋi�[
	const char* omikuji[] = {"��g", "���g","���g","�g","���g","��","�勥"};

	//�����̃V�[�h�l��ݒ�
	srand(time(NULL));

	int retry;

	do {
		//�����𐶐����Ă��݂����̌��ʂ�\��
		int index = rand() % 6;
		printf("���݂����̌��ʁF%s\n", omikuji[index]);
		printf("������x�F0�c������ 1�c�͂��F");
			scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;

}

