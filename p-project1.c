//�����Ĕ���i���̂P�F����Łj
#include <stdio.h>

int main(void)
{
	printf("0�`9�̐����𓖂Ă悤�I\n\n");

	int ans = 7; //���Ă����鐔
	int no;      //�ǂݍ��񂾒l

	printf("�������ȁF");
	scanf_s("%d", &no);

	if (no > ans)
		printf("�����Ə�������B\a\n");
	else if (no < ans)
		printf("�����Ƒ傫����B\a\n");
	else
		printf("�����ł��B\n");

	return 0;
}