#include<stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void)
{
	int num;

	printf("�l����͂���F\n");
	printf("����:"); scanf("%d", &num);
	

	printf("%d��3���%d�ł�\n", num, cube(num));

	return 0;

}