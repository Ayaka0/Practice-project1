#include<stdio.h>

int main(void)
{
	int n;

	printf("��������͂���");
	scanf("%d", &n);

	switch (n % 2) {
	case 0: puts("���̐��͋����ł��B"); break;
	case 1: puts("���̐��͊�ł��B"); break;
	}
	

	return 0;
}