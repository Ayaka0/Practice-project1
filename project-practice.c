#include<stdio.h>

int main(void)
{
	int a[5]; //コピー元配列
	int b[5]; //コピー先配列

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	int count = 0; //コピーした要素数
	for (i = 0; i < 5; i++)
		if (a[i] > 0)	//正であれば
			b[count++] = i; //コピー


	printf("正の要素は%dです。\n", count);

	for (i = 0; i < count; i++)
		printf("b[%d] = %d    a[%d] = %d\n", i, b[i], b[i],a[b[i]]);


	return 0;
}