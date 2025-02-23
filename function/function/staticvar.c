#include <stdio.h>

//정적변수  - static 
//선언된 함수가 종료되어도 그 값을 계속 유지하는 변수
//프로그램이 종료될때 소멸함
//void call();
//int main() {
//	call();
//	call();
//	call();
//	return 0;
//}
//void call() {
//	static int x = 0;
//	x += 1;
//	printf("현재 호출은 %d번째입니다.\n",x);
//}


//void call();
//int main() {
//	call();
//	call();
//	call();
//	
//
//	return 0;
//}
//
////void = 반환 자료형이 없음
//void call() {
//	static int x = 0; //정적변수이며 static이 없으면 반복하지만 넣으면 다음것을 생각해 출력해준다 1-1 -> 1-2
//	x += 1; 
//	printf("현재 호출은 %d번째입니다.\n", x);
//}