#include<stdio.h>

int main(void)
{

	int n1, n2;

	puts("��������͂���"); 
	printf("����n1�F");  scanf("%d", &n1);
	printf("����n2�F");  scanf("%d", &n2);

	int ave = (n1 + n2) / 2;

	printf("���ϒl%d�̕����𔽓]�����l��%d�ł��B\n",+ave, -ave);

	return 0;
}