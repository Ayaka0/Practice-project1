#include<stdio.h>

#define NUMBER 120 //�z��a�̗v�f��

int main(void)
{
	int num;
	int tensu[NUMBER]; //�f�[�^���̐錾
	int bunpu[11] = { 0 };

	printf("�l������́F");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("1�`%d�œ��͂���F", NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d�̓_������͂���\n", num);

	int i;
	for (i = 0; i < num; i++) {
		printf("%2d�ԁF", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("0�`100�œ��́F");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	puts("-----���z�O���t------");
	
	int bunpu_max = 0;
	for (i = 0; i <= 10; i++)
		if (bunpu[i] > bunpu_max)
			bunpu_max = bunpu[i];

	int j;
	for (i = bunpu_max; i >= 1; i--)
	{
		for (j = 0; j <= 10; j++)
		{
			if (bunpu[j] >= i)
				printf(" * ");
			else
				printf("   ");
		}
		putchar('\n');
	}
	for (i = 0; i < 34; i++)
		putchar('-');
	putchar('\n');
	for (i = 0; i <= 10; i++)
		printf("%2d ", i * 10);
	putchar('\n');


	return 0;

}

