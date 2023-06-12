#include<stdio.h>

int main(void)
{

	int no;

	printf("³‚Ì®”‚ð“ü—ÍG");
	scanf("%d", &no);

	
	if  (no >= 1){
		int i = 1;
		while (i <= no)
		printf("%d", i++);
		printf("\n");
	}
	return 0;


}