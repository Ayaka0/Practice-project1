#include<stdio.h>

void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main(void)
{
	int len;

	printf("ç∂â∫íºäpéOäpå`\n");
	printf("íZï”ÅF"); scanf("%d",&len);

	int i;
	for (i = 1; i <= len; i++)
	{
		put_stars(i);
		putchar('\n');
	}

	return 0;
}