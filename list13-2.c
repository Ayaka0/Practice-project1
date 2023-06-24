#include<stdio.h>
#include<string.h>

#define NINZU_MAX 50 //�ǂݍ��ސl���̏��
#define NAME_LEN 100 //���O�p������̗v�f��


int main(void)
{
	FILE* fp;

	if ((fp = fopen("hw.txt", "r")) == NULL)
		printf("\a�t�@�C�����I�[�v���ɂł��܂���B\n");
	else {
		int ninzu = 0; //�l��
		char name[NAME_LEN][NINZU_MAX]; //���O
		double height[NINZU_MAX];
		double weight[NINZU_MAX]; //�g���Ƒ̏d
		double hsum = 0.0; //�g���̍��v
		double wsum = 0.0; //�̏d�̍��v

		int i;
		for (i = 0; i < NINZU_MAX; i++) {
			if (fscanf(fp, "%s%lf%lf", name[ninzu], &height[ninzu], &weight[ninzu]) != 3)
				break;

			hsum += height[ninzu];
			wsum += weight[ninzu];
			ninzu++;
		}
		int j;
		for (i = 0; i < ninzu - 1; i++) {
			for (j = ninzu - 1; j > i; j--) {
				if (height[j - 1] > height[j]) {
					char tn[NAME_LEN];
					double td;
					strcpy(tn, name[j]);
					strcpy(name[j], name[j - 1]);
					strcpy(name[j - 1], tn);
					td = height[j]; height[j] = height[j - 1]; height[j - 1] = td;
					td = weight[j]; weight[j] = weight[j - 1]; weight[j - 1] = td;
				}
			}
		}

		for(i = 0; i < ninzu; i++)
			printf("%-10s %5.1f %5.1f\n", name[i], height[i], weight[i]);

		
		/*while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		*/
		printf("------------------------------\n");
		printf("���ρ@�@�@�@%5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);
	}

	return 0;
}