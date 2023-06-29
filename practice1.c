#include<stdio.h>

int main(void)
{
	int month;

	printf("‰½Œ‚Å‚·‚©F");
	scanf("%d", &month);

	switch (month) {
	case 1: puts("1Œ‚Í“~‚Å‚·"); break;
	case 2: puts("2Œ‚Í“~‚Å‚·"); break;
	case 3: puts("3Œ‚Ít‚Å‚·"); break;
	case 4: puts("4Œ‚Ít‚Å‚·"); break;
	case 5: puts("5Œ‚Ít‚Å‚·"); break;
	case 6: puts("6Œ‚Í‰Ä‚Å‚·"); break;
	case 7: puts("7Œ‚Í‰Ä‚Å‚·"); break;
	case 8: puts("8Œ‚Í‰Ä‚Å‚·"); break;
	case 9: puts("9Œ‚Í‚ ‚«‚Å‚·"); break;
	case 10: puts("10Œ‚Í‚ ‚«‚Å‚·"); break;
	case 11: puts("11Œ‚ÍH‚Å‚·"); break;
	case 12: puts("12Œ‚Í“~‚Å‚·"); break;
	default: puts("‚»‚ñ‚ÈŒ‚Í‚ ‚è‚Ü‚¹‚ñB");
	}

	return 0;
}