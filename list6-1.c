#include<stdio.h>

//2æ’l‚ğ•Ô‚·
int sqr(int a)
{
	return a * a;
}

//4æ’l‚ğ•Ô‚·
int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int num;

	printf("’l‚ğ“ü—Í‚¹‚æ\n");
	printf("®”:"); scanf("%d",&num);
	

	printf("%d‚Ì4æ‚Í%d‚Å‚·\n", num, pow4(num));

	return 0;

}