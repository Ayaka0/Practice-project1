#include <stdio.h>

//�O���[�o���ϐ��Œ�`
//���A�̔ԍ�
char echoNo = 0;


void echoGreeting(void)
{
	switch (echoNo)
	{
	case 0:
		printf("���͂悤�������܂�\n");
		break;

	case 1:
		printf("����ɂ���\n");
		break;

	case 2:
		printf("����΂��\n");
		break;
	}

	//�Ăяo����Ɏ��̈��A��
	echoNo++;

	//�ŏ��ɖ߂�
	if (echoNo >= 3)
	{
		echoNo = 0;
	}

	return;
}



int main(void)
{
	//  ���͂悤�������܂�
	echoGreeting();

	//  ����ɂ���
	echoGreeting();

	//  ����΂��
	echoGreeting();

	//  ���͂悤�������܂�
	echoGreeting();

	return 0;
}