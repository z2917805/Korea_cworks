#include <stdio.h>
#include <math.h> // abs()함수를 사용하는데 필요
//절대값을 구하는 함수 정의

int myAbs(int x) {
	if (x < 0) {
		return -x;
	}
	else {
		return x;
	}
}
int main_fuction2() {
	int value1, value2, value3;
	value1 = abs(-3);
	value2 = abs(+3);
	value3 = myAbs(-3);
	printf("내장 함수의 절대값:%d\n", value1);
	printf("내장 함수의 절대값:%d\n", value2);
	printf("내가 만든 함수의 절대값:%d\n", value3);

	return 0;
}