#include<stdio.h>

int main(void)
{

	int no;

	printf("正の整数を入力；");
	scanf("%d", &no);

	
	if  (no >= 1){
		int i = 1;
		while (i <= no)
		printf("%d", i++);
		printf("\n");
	}
	return 0;


}