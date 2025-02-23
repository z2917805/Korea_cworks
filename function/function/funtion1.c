#include <stdio.h>
//두 수를 계산하는 함수
int add(int , int); //함수 선언부
int sub(int , int);
int main_Function1() {
	int result1, result2;
	result1 = add(10, 20);//더하기

	result2 = sub(10, 20); //빼기

	printf("더한결과:%d\n", result1);
	printf("뺀 결과:%d\n", result2);
	return 0;
}

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}