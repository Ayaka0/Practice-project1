#include<stdio.h>

int main(void)
{
	int no;

	printf("�����l�G");
	scanf("%d", &no);

	switch (no % 3) {
	case 0: puts("3�Ŋ��肯���"); break;
	case 1 : puts("3�Ŋ�������]�͂P�ł��B"); break;
	case 2 : puts("3�Ŋ�������]�͂Q�ł��B"); break;
	}

	return 0;


}