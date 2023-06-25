//前回のプログラム実行時の日付と時刻を表示する
#include<stdio.h>
#include<time.h>

char data_file[] = "kibun.dat";
// data_file[] = "datetime.dat"; //ファイル名

//前回の日付・時刻を取得・表示
void get_data(void)
{
	FILE* fp;

	if ((fp = fopen(data_file, "r")) == NULL)
		printf("本プログラムを実行するのははじめてですね。\n");
	else {
		int year, month, day, h, m, s;
		char kibun[2048];

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		fscanf(fp, "%s", kibun);
		printf("前回は%d年%d月%d日%d時%d分%d秒で、気分は%sした。\n", year, month, day, h, m, s, kibun);
		fclose(fp);
	}
}

//今回の日付・時刻を書き込む
void put_data(const char *kibun)
{
	FILE* fp;

	if ((fp = fopen(data_file, "w")) == NULL)
		printf("ファイルをオープンできません。\n");
	else {
		time_t current = time(NULL); //現在の時刻歴
		struct tm* timer = localtime(&current); //要素別の時刻（地方時）
		fprintf(fp, "%d %d %d %d %d %d\n",
			timer->tm_year + 1900, //年（1900を加えて求める）
			timer->tm_mon + 1, //月（１を加えて求める）
			timer->tm_mday,  //日
			timer->tm_hour, //時
			timer->tm_min, //分
			timer->tm_sec //秒
		);
		fprintf(fp, "%s\n", kibun);
		fclose(fp);

	}
}

int main(void)
{
	char kibun[2048];

	get_data(); //前回の日付・時刻を取得・表示

	printf("現在の気分は：");
	scanf("%s", kibun);

	put_data(kibun); //今回の日付・時刻を書き込む

	return 0;
}

/*
int main(void)
{
	time_t current = time(NULL); //現在の時刻歴
	struct tm* timer = localtime(&current); //要素別の時刻（地方時）
		char* wday_name[] = { "日","月", "火","水","木","金","土" };

		printf("現在の日付・時刻は%d年%d月%d日（%s） %d時%d分%d秒です。\n",
			timer->tm_year + 1900, //年（1900を加えて求める）
			timer->tm_mon +1, //月（１を加えて求める）
			timer->tm_mday,  //日
			wday_name[timer->tm_wday], //曜日（０～６）
			timer->tm_hour, //時
			timer->tm_min, //分
			timer->tm_sec //秒
			);
		return 0;
}
*/