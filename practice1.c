#include<stdio.h>

#define NUMBER 5

int main(void)
{
	int tensu[NUMBER];
	int sum = 0;

	printf("5�l�̓_������͂���\n", NUMBER);

	int i;
	for (i = 0; i < NUMBER; i++)
	{
	printf("%2d�ԁF", i + 1);
	scanf("%d", &tensu[i]);
	sum += tensu[i];
	}

	printf("���v�_�F%5d\n", sum);
	printf("���ϓ_�F%5.1f\n", (double)sum / NUMBER);
	return 0;

}

