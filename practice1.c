#include<stdio.h>

int main(void)
{
	int lower, upper, step; //�J�n�l�A�I���l�A����

	printf("��cm����F"); scanf("%d", &lower);
	printf("��cm�܂ŁF"); scanf("%d", &upper);
	printf("��cm���ƁF"); scanf("%d", &step);

	for (int height = lower; height <= upper; height += step)
		printf("%dcm %.2fkg\n", height, (height - 100) * 0.9);


	return 0;

}

