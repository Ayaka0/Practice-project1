#include<stdio.h>

int main(void)
{
	int n1, n2;

	puts("3Ç¬ÇÃêÆêîÇì¸óÕÇπÇÊ");
	printf("êÆêîÇPÅF"); scanf("%d", &n1);
	printf("êÆêîÇQÅF"); scanf("%d", &n2);

	if (n1 - n2 >10 || n2 - n1 > 10)
		printf("ÇªÇÍÇÁÇÃç∑ÇÕ11à»è„Ç≈Ç∑ÅB\n");
	else 
		printf("ÇªÇÍÇÁÇÃç∑ÇÕ10à»â∫Ç≈Ç∑\n");
	

	return 0;
}