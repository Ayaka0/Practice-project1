#include<stdio.h>

int main(void)
{
	int a[5]; //コピー元配列
	int b[5]; //コピー先配列

	int i;
	for (i = 0; i < 5; i++) //要素に値を読み込む
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	/*配列aも並びを逆にする*/
	for (i = 0; i < 2; i++)
	{
		int t = a[i];
		a[i] = a[4 - i];
		a[4 - i] = t;
	}


	/*配列aを配列bにコピーする*/
	for (i = 0; i < 5; i++)
		b[i] = a[i];

	puts("   a    b");
	puts("---------");
	for (i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);


	return 0;
}