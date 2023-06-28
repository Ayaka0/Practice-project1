#include<stdio.h>

int main(void)
{
	double height, weight;

	printf("g’·‚ğ“ü—Í‚¹‚æ\n");scanf("%lf", &height);
	printf("‘Ìd‚ğ“ü—Í‚¹‚æ\n"); scanf("%lf", &weight);
	
	double bmi = weight / (height/100 * height/100);

	printf("BMI‚Í%.2f‚Å‚·B", bmi);


	return 0;
}