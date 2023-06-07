#include<stdio.h>

int main(void)
{
	int no;

	printf("整数値；");
	scanf("%d", &no);

	switch (no % 3) {
	case 0: puts("3で割りけれる"); break;
	case 1 : puts("3で割った剰余は１です。"); break;
	case 2 : puts("3で割った剰余は２です。"); break;
	}

	return 0;


}