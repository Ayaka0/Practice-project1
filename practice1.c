#include<stdio.h>

int main(void)
{
	int no;

	printf("�_���F");
	scanf("%d", &no);

	if (no > 100|| no < 0)
		printf("�s���ȓ_��");
	else if (no < 60)
		printf("�s��");
	else if (no < 70)
		printf("��");
	else if (no < 80)
		printf("��");
	else
		printf("�D");

	return 0;
}