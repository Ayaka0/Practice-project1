#include<stdio.h>

int main(void)
{
	int no; //scanf�̓��͕ϐ��錾
	printf("��������́F");
	scanf("%d", &no);

	int q = no / 10; //1234567890�̌�
	int r = no % 10; //�c��̌�
	int i;

	for (i = 1; i <= q; i++)
		printf("12234567890");
	for (i = 1; i <= r; i++)
		printf("%d", i % 10);
	putchar('\n');


	return 0;

}

