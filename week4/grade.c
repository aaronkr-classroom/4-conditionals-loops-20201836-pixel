#include <stdio.h>


int main(void) {

	
	char if_grade(int);
	char switch_grade(int);
	
	int score = 88;
	char grade = switch_grade(score);


	
	printf("Grade: %d, %c", score, grade);
	



	return 0;
}

char if_grade(int score) {
	if (score >= 90)
		return 'A';
	else if (score >= 80)
		return 'B';
	else if (score >= 70)
		return 'C';
	else if (score >= 60)
		return 'D';

	else return 'F';

}
char switch_grade(int score) {

	switch (score / 10) {

	case 10:
	case 9:
		return 'A'; //return 문 사용하면 break 필요없음
	case 8:
		return 'B';
	case 7:
		return 'C';

	case 6:
		return 'D';
	default:
			return'F';
	}


}