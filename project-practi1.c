#include<stdio.h>

int scan_pint(void)
{
	int tmp;

	do
	{
		printf("³‚Ì®”‚ğ“ü—Í‚¹‚æ");
		scanf("%d", &tmp);
		if (tmp <= 0)
			puts("\a³‚Å‚È‚¢”‚ğ“ü—Í‚µ‚È‚¢‚Å");
	} while (tmp <= 0);
	return tmp;
}

int rev_int(int num)
{
	int tmp = 0;

	if (num > 0)
	{
		do
		{
			tmp = tmp * 10 + num % 10;
			num /= 10;
		} while (num > 0);
	}
	return tmp;

}

int main(void)
{
	int nx = scan_pint();
	printf("”½“]‚µ‚½’l‚Í%d‚Å‚·B\n", rev_int(nx));

	return 0;
}