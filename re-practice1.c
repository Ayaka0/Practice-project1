#include<stdio.h>

int main(void)
{
	int num;

	printf("�����͉��H");
	scanf("%d", &num);

	int i = 0;
	int sum = 0;
	while (i < num) {
		int tmp;
		printf("No.%d : ", ++i);
		scanf("%d", &tmp);
		sum += tmp;
	}

	printf("���v�l�F%d\n", sum);
	printf("���ϒl�F%.2f\n", (double)sum / num);

	return 0;


}