#include<stdio.h>

#define NUMBER 5 //�w���̐l��


int max_of(int v[], int n)
{
	int max = v[0];

	int i;
	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return max;
}

int main(void)
{
	int eng[NUMBER];
	int mat[NUMBER];

	printf("%d�l�̓_������́B\n", NUMBER);
	int i;
	for (i = 0; i < NUMBER; i++)
	{
		printf("[%d]�p��F", i + 1); scanf("%d", &eng[i]);
		printf("���w�F"); scanf("%d", &mat[i]);
	}

	int max_e = max_of(eng, NUMBER);
	int max_m = max_of(mat, NUMBER);

	printf("�p��̍ō��_=%d\n", max_e);
	printf("���w�̍ō��_=%d\n", max_m);

	return 0;
}