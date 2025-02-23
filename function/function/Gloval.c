#include <stdio.h>
//전역변수의 생명주기
//프로그램이 시작될때 생성되고 
//프로그램이 종료될때 소멸(해제)된다.
//int x=1;//<-전역변수(모든 곳에 영향을 미침)
//int sum10();//함수 선언부
//int main_gloval() {
//
//	int value = sum10(); // value지역변수이다.
//	printf("value=%d\n",value);
//
//	return 0;
//}
//
//int sum10() {
//	static int x = 1; //지역변수
//	x = x + 10;
//	return x;
//}