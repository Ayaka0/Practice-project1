#include<stdio.h>

int main(void) {

	int no; //int�^�ϐ�no

	printf("���̐�������͂���;");
	scanf("%d", &no);

	if (no >= 0) {
		while (no >= 0) {
			printf("%d ", no);
			no--;	//no�f�N�������g
		}
		printf("\n");
	}

	return;

}