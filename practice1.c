#include<stdio.h>

int main(void)
{
	int lower, upper, step; //開始値、終了値、増分

	printf("何cmから："); scanf("%d", &lower);
	printf("何cmまで："); scanf("%d", &upper);
	printf("何cmごと："); scanf("%d", &step);

	for (int height = lower; height <= upper; height += step)
		printf("%dcm %.2fkg\n", height, (height - 100) * 0.9);


	return 0;

}

