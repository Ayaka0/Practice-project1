#include<stdio.h>

#define NUMBER 7 //�w���l��

int tensu[NUMBER]; //�z��̒�`

int pass(void); //�֐�pass�̃v���g�^�C�v�錾


int pass(void)
{
	extern tensu[NUMBER];

	printf("���i�҈ꗗ�\\n");
	printf("---------------\n");
	int i;
	for (i = 0; i < NUMBER; i++)
		if (tensu[i] >= 60)
			printf("%d�ԁF%d\n", i+1, tensu[i]);
}


int main(void)
{
	extern int tensu[];

	printf("%d�l�̓_������́F\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d�F", i + 1);
		scanf("%d", &tensu[i]);
	}
	
	pass();
		
		return 0;
}