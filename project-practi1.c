#include<stdio.h>

void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

int main(void)
{
	int len;

	printf("�E�����p�O�p�`�����܂��B\n");
	printf("�Z�ӁF");
	scanf("%d", &len);

	int i;
	for (i = 1; i <= len; i++)
	{
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}

	return 0;
}