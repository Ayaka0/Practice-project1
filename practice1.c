#include<stdio.h>

int main(void)
{
	int no; //*�\��

	printf("����*��\��������H");
	scanf("%d", &no);

	int i; //�J�E���g�錾
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

