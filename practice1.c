#include<stdio.h>

int main(void)
{
	double height, weight;

	printf("�g������͂���\n");scanf("%lf", &height);
	printf("�̏d����͂���\n"); scanf("%lf", &weight);
	
	double bmi = weight / (height/100 * height/100);

	printf("BMI��%.2f�ł��B", bmi);


	return 0;
}