#include <stdio.h>


unsigned long getAreaTriangle(unsigned long bottom, unsigned long height)
{
	unsigned long area;

	//�ʐς��v�Z
	area = bottom * height / 2;

	//�ʐς�߂�l�ŕԋp
	return area;
}



int main(void)
{
	unsigned long bottom = 15;
	unsigned long height = 20;
	unsigned long area;

	area = getAreaTriangle(bottom, height);

	printf("��ӁF%d �����F%d �ʐρF%d",bottom, height, area);

	return 0;
}