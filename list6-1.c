#include<stdio.h>

//2��l��Ԃ�
int sqr(int a)
{
	return a * a;
}

//4��l��Ԃ�
int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int num;

	printf("�l����͂���\n");
	printf("����:"); scanf("%d",&num);
	

	printf("%d��4���%d�ł�\n", num, pow4(num));

	return 0;

}