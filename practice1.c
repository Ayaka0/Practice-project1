#include <stdio.h>


void displaySquare(unsigned short len)
{
	unsigned short i, j;

	for (i = 0;i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			printf("#");
		}

		//1行終わったら改行
		printf("\n");
	}
	return;
}



int main(void)
{
	unsigned long length = 3;

	//段数３で表示要求
	displaySquare(length);

	return 0;
}