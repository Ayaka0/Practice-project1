#include<stdio.h>

int main(void) {

	int no; //int�^�ϐ�no

	printf("���̐�������͂���;");
	scanf("%d", &no);

	if (no >= 1) {
		int i = 2; //�J�E���g�A�b�v�p�ɕK�v�ȕϐ�
		while (i <= no) {
			printf("%d ", i);
			i *= 2;//i�̒l��\��������ɃC���N�������g
		}
		printf("\n");
	}
	return;

}