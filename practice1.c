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

		//1�s�I���������s
		printf("\n");
	}
	return;
}



int main(void)
{
	unsigned long length = 3;

	//�i���R�ŕ\���v��
	displaySquare(length);

	return 0;
}