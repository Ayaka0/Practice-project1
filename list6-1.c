//警報を繰り返し発する
#include<stdio.h>

//文字chをn個連続して表示
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}

//文字chをn個連続して表示して改行
void put_chars_ln(int ch, int n)
{
	put_chars(ch, n);
	putchar('\n');
}

//警報をn回連続して発する
void alert(int n)
{
	put_chars('\a', n);
}

int main(void)
{
	int n;

	put_chars_ln('=', 24);
	printf("警報を発する回数：");
	scanf("%d", &n);
	put_chars_ln('-', 24);

	alert(n);
	putchar('\n');

	put_chars_ln('=', 24);

	return 0;

}