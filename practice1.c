#include <stdio.h>

//グローバル変数で定義
//挨拶の番号
char echoNo = 0;


void echoGreeting(void)
{
	switch (echoNo)
	{
	case 0:
		printf("おはようございます\n");
		break;

	case 1:
		printf("こんにちは\n");
		break;

	case 2:
		printf("こんばんは\n");
		break;
	}

	//呼び出し後に次の挨拶へ
	echoNo++;

	//最初に戻す
	if (echoNo >= 3)
	{
		echoNo = 0;
	}

	return;
}



int main(void)
{
	//  おはようございます
	echoGreeting();

	//  こんにちは
	echoGreeting();

	//  こんばんは
	echoGreeting();

	//  おはようございます
	echoGreeting();

	return 0;
}