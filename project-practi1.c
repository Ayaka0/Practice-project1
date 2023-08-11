#include<stdio.h>

#define NUMBER 7

void intary_rcpy(int v1[], const v2[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		v1[i] = v2[n - i - 1];
}


int main(void)
{
	int x1[NUMBER], x2[NUMBER];

	int i;
	for (i = 0; i < NUMBER; i++)
	{
		printf("x1[%d] ; ", i);
		scanf("%d", &x1[i]);
	}
	intary_rcpy(x2, x1, NUMBER);

	puts("”½“]ƒRƒs[");
	for (i = 0; i < NUMBER; i++)
		printf("x2[%d] = %d\n", i, x2[i]);
		
		return 0;
}