#include <stdio.h>


unsigned long getFactorial(unsigned short number)
{
	unsigned long calc = 1;
	unsigned short i;

	//���ɉ��Z
	for (i = 1; i <= number; i++)
	{
		//���ȑ��
		calc *= i;
	}

	//���Z���ʂ�߂�l�Ƃ���
	return calc;
}



int main(void)
{
	unsigned short num = 4;

	//�֐��̖߂�l�𒼐ڕ\��
	printf("���F%d �K��F%d", num, getFactorial(num));

	return 0;
}