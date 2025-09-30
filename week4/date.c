//date.c

#include <stdio.h>

int main(void) {

	//2025년 12월  31일을 3개의 정수 변수에 나누어서 대입함

	int year = 2025;
	int mth = 9;
	int day = 30;


	day++;

	if (day >= 30) {
		mth++;
		day = 1;

		if (mth >= 12) {
			year++;
			mth = 1;

			}
	}

	printf("date is %d년 %d월 %d일\n", year, mth, day);

	return 0;
}