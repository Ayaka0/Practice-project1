#include<stdio.h>

#define NUMBER 5 //�w���̐l��
int tensu[NUMBER]; //�z��̒�`
int top(void); //�֐�top�̊֐����^�錾

int top(void)
{
	extern int tensu[]; //�z��̐錾
	int max = tensu[0];

	int i;
	for (i = 1; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;

}

int main(void)
{
	extern int tensu[];

	printf("%d�l�̓_������͂���B\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d : ", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("�ō��_��%d\n", top());

	return 0;
}