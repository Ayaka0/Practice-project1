#include<stdio.h>

int main(void)
{
	int a,b;

	printf("�Q�̐�������͂���G");
	printf("����A�F");  scanf("%d", &a);
	printf("����B�F");  scanf("%d", &b);

	if (a == b)
		printf("A��B�͓������ł��B\n");
	else if (a > b)
		printf("A��B�͂��傫���ł��B\n");
	else
		printf("B��A���傫���ł��B\n");
	

	return 0;
}