#include<stdio.h>

int main(void)
{
	int no; //scanf�̓��͕ϐ��錾
	printf("n�̒l�F");
	scanf("%d", &no);

	int sum = 0; //�C���N�������g�̂��Ƃ̍��v�l�̐錾
	int i; //�J�E���g�̐錾

	for (i = 1; i <= no; i++)
	{
		sum += i;
	}
	printf("1����%d�܂ł̑��a��%d�ł��B", no, sum);


	return 0;

}

