#include <stdio.h>


unsigned long getAreaTriangle(unsigned long bottom, unsigned long height)
{
	unsigned long area;

	//面積を計算
	area = bottom * height / 2;

	//面積を戻り値で返却
	return area;
}



int main(void)
{
	unsigned long bottom = 15;
	unsigned long height = 20;
	unsigned long area;

	area = getAreaTriangle(bottom, height);

	printf("底辺：%d 高さ：%d 面積：%d",bottom, height, area);

	return 0;
}