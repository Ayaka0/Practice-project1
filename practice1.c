#include<stdio.h>

int main(void)
{
	int no; //*個表示

	printf("何個*を表示させる？");
	scanf("%d", &no);

	int i; //カウント宣言
	int rem = no % 5;

	for (i = 0; i < no / 5; i++)
		puts("*****");
	if (rem > 0)
	{
		for (i = 0; i < rem; i++)
			putchar('*');
		putchar('\n');
	}


	return 0;

}

