#include<stdio.h>

int main(void)
{
	int area; //�ʐ�
	
	printf("�ʐρF");
	scanf("%d", &area);

	int tate;
	for (tate = 1; tate < area; tate++)
	{
		if (tate * tate > area) break;
		if (area % tate != 0) continue;
		printf("%d x %d\n", tate, area / tate);
	}

	return 0;

}

