//Q1, Q2, Q3 표시

#include <stdio.h>

void q1(int result);
void q2(int result);
void q3(int result);


int main(void) {

	int result = -5;

	q1(result);
	
	q2(result);
	
	q3(result);
	

	return 0;


}


void q1(int result)
{
	if (result < 0) {
		result = result * (-1);
		printf("result = %d\n", result);
	}
}

void q2(int result) {
	result = (result > 0) ? result : -result;
	printf("result = %d\n", result);

}

void q3(int result) {
	switch (result = result * (-1)) {
	case 6:
		result = 0;
		break;
	case 5:
		result = 1;
	
	case 4:
		result = result * 10;
		break;

		

	}
	printf("result = %d\n", result);
}

