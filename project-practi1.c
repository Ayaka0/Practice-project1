#include<stdio.h>

#define NUMBER 5 //—v‘f”
#define FAILED -1 //’Tõ¸”s

//—v‘f”n‚Ì”z—ñv‚©‚çkey‚Æˆê’v‚·‚é—v‘f‚ğ’Tõ
int search(const int v[], int key, int n)
{
	int i = 0;

	while (1)
	{
		if (i == n)
			return FAILED; //’Tõ¸”s
		if (v[i] == key)
			return i;		//’Tõ¬Œ÷
		i++;
	}
}

int main(void)
{
	int ky, idx;
	int x[NUMBER];

	int i;
	for (i = 0; i < NUMBER; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("’T‚·’lF");
	scanf("%d", &ky);

	idx = search(x, ky, NUMBER); //—v‘f”NUMBER‚Ì”z—ñx‚©‚çky‚ğ’Tõ

	if (idx == FAILED)
		puts("’Tõ‚É¸”s‚µ‚Ü‚µ‚½B");
	else
		printf("%d‚Í%d”Ô–Ú‚É‚ ‚è‚Ü‚·B", ky, idx + 1);


	return 0;
}
