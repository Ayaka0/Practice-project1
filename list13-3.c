//プログラムを実行した日付・時刻をファイルに書き出す
#include<stdio.h>
#include<time.h>

int main(void)
{
	FILE* fp;
	if ((fp = fopen("dt_txt", "w")) == NULL)
		printf("ファイルをオープンできません。\n");
	else {
		time_t current = time(NULL);
		struct tm* timer = localtime(&current);

		printf("現在の日付・時刻を書き出しました。\n");
		fprintf(fp, "%d %d %d %d %d %d\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
		fclose(fp);
	}

	return 0;
}