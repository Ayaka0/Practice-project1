#include<stdio.h>

int main(void)
{
	int sum = 0;
	int cnt = 0;
	int retry;

	do {
		int t;
		printf("�����l����͂���G");
		scanf("%d",&t);

		sum += sum;
		cnt++;
		printf("�܂��H�yyes-0 / No-9�z�G");
		scanf("%d",&retry);
	} while (retry == 0);

		printf("���v��%d�ŕ��ς�%.2f�ł��B\n", sum, (double)sum / cnt);

	return 0;


}