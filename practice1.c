#include<stdio.h>

int main(void)
{
	double height, weight;

	printf("身長を入力せよ\n");scanf("%lf", &height);
	printf("体重を入力せよ\n"); scanf("%lf", &weight);
	
	double bmi = weight / (height/100 * height/100);

	printf("BMIは%.2fです。", bmi);


	return 0;
}