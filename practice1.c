#include<stdio.h>

int main(void)
{
	int a,b;

	printf("�Q�̐�������͂���G");
	printf("����A�F");  scanf("%d", &a);
	printf("����B�F");  scanf("%d", &b);


	puts("�������̒l");
		printf("a==b�̒l�F%d\n", a==b);
		printf("a!=b�̒l�F%d\n", a != b);
	
	puts("�֌W���̒l");
		printf("a < b�̒l�F%d\n", a < b);
		printf("a <= b�̒l�F%d\n", a <= b);
		printf("a > b�̒l�F%d\n", a > b);
		printf("a >= b�̒l�F%d\n", a >= b);
	

	return 0;
}