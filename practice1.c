#include<stdio.h>

int main(void)
{
	int no1, no2, height, width;
	printf("�����̒����`�����܂��B\n");
	printf("��Ӂi���̂P�j�F"); scanf("%d", &no1);
	printf("��Ӂi���̂Q�j�F"); scanf("%d", &no2);

	int i, j;

	if (no1 < no2)
	{
		height = no1;
		width = no2;
	}
	else
	{
		height = no2;
		width = no1;
	}

	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= width; j++)
			putchar('*');
		putchar('\n');
	}


	return 0;

}

