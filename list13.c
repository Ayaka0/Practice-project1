#include<stdio.h>
#include<time.h>

int main(void)
{
	time_t current = time(NULL); //Œ»Ý‚ÌŽž—ð
	struct tm* timer = localtime(&current); //—v‘f•Ê‚ÌŽži’n•ûŽžj
		char* wday_name[] = { "“ú","ŒŽ", "‰Î","…","–Ø","‹à","“y" };

		printf("Œ»Ý‚Ì“ú•tEŽž‚Í%d”N%dŒŽ%d“úi%sj %dŽž%d•ª%d•b‚Å‚·B\n",
			timer->tm_year + 1900, //”Ni1900‚ð‰Á‚¦‚Ä‹‚ß‚éj
			timer->tm_mon +1, //ŒŽi‚P‚ð‰Á‚¦‚Ä‹‚ß‚éj
			timer->tm_mday,  //“ú
			wday_name[timer->tm_wday], //—j“úi‚O`‚Uj
			timer->tm_hour, //Žž
			timer->tm_min, //•ª
			timer->tm_sec //•b
			);
		return 0;
}