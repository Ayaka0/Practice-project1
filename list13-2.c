#include<stdio.h>

int main(void)
{
	FILE* fp;

	if ((fp = fopen("hw.txt", "r")) == NULL)
		printf("\a�t�@�C�����I�[�v���ɂł��܂���B\n");
	else {
		int ninzu = 0; //�l��
		char name[100]; //���O
		double height, weight; //�g���Ƒ̏d
		double hsum = 0.0; //�g���̍��v
		double wsum = 0.0; //�̏d�̍��v

		while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		printf("------------------------------\n");
		printf("���ρ@�@�@�@%5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);
	}

	return 0;
}