#include<stdio.h>

int main(void)
{
	int no; //���͒l�̐錾
	int i, j; //�c�Ɖ��̃J�E���g�錾

	printf("�����`�����܂��B\n");
	printf("���i�ł���");  scanf("%d", &no);
	
	for (i = 1; i <= no; i++)
	{
		for (j = 1; j <= no; j++)
			putchar('*', i * j);
		putchar('\n');
	}

	return 0;

}

