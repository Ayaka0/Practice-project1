//�O��̃v���O�������s���̓��t�Ǝ�����\������
#include<stdio.h>
#include<time.h>

char data_file[] = "kibun.dat";
// data_file[] = "datetime.dat"; //�t�@�C����

//�O��̓��t�E�������擾�E�\��
void get_data(void)
{
	FILE* fp;

	if ((fp = fopen(data_file, "r")) == NULL)
		printf("�{�v���O���������s����̂͂͂��߂Ăł��ˁB\n");
	else {
		int year, month, day, h, m, s;
		char kibun[2048];

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		fscanf(fp, "%s", kibun);
		printf("�O���%d�N%d��%d��%d��%d��%d�b�ŁA�C����%s�����B\n", year, month, day, h, m, s, kibun);
		fclose(fp);
	}
}

//����̓��t�E��������������
void put_data(const char *kibun)
{
	FILE* fp;

	if ((fp = fopen(data_file, "w")) == NULL)
		printf("�t�@�C�����I�[�v���ł��܂���B\n");
	else {
		time_t current = time(NULL); //���݂̎�����
		struct tm* timer = localtime(&current); //�v�f�ʂ̎����i�n�����j
		fprintf(fp, "%d %d %d %d %d %d\n",
			timer->tm_year + 1900, //�N�i1900�������ċ��߂�j
			timer->tm_mon + 1, //���i�P�������ċ��߂�j
			timer->tm_mday,  //��
			timer->tm_hour, //��
			timer->tm_min, //��
			timer->tm_sec //�b
		);
		fprintf(fp, "%s\n", kibun);
		fclose(fp);

	}
}

int main(void)
{
	char kibun[2048];

	get_data(); //�O��̓��t�E�������擾�E�\��

	printf("���݂̋C���́F");
	scanf("%s", kibun);

	put_data(kibun); //����̓��t�E��������������

	return 0;
}

/*
int main(void)
{
	time_t current = time(NULL); //���݂̎�����
	struct tm* timer = localtime(&current); //�v�f�ʂ̎����i�n�����j
		char* wday_name[] = { "��","��", "��","��","��","��","�y" };

		printf("���݂̓��t�E������%d�N%d��%d���i%s�j %d��%d��%d�b�ł��B\n",
			timer->tm_year + 1900, //�N�i1900�������ċ��߂�j
			timer->tm_mon +1, //���i�P�������ċ��߂�j
			timer->tm_mday,  //��
			wday_name[timer->tm_wday], //�j���i�O�`�U�j
			timer->tm_hour, //��
			timer->tm_min, //��
			timer->tm_sec //�b
			);
		return 0;
}
*/