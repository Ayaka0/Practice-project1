#include <stdio.h>


unsigned long getFactorial(unsigned short number)
{
	unsigned long calc = 1;
	unsigned short i;

	//順に加算
	for (i = 1; i <= number; i++)
	{
		//自己代入
		calc *= i;
	}

	//加算結果を戻り値とする
	return calc;
}



int main(void)
{
	unsigned short num = 4;

	//関数の戻り値を直接表示
	printf("数：%d 階乗：%d", num, getFactorial(num));

	return 0;
}