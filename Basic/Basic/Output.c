#include <stdio.h>
int main_output() {
	int number = 11;
	char place = 'B'; // 문자 1개 - 흩따옴표
	char name[] = "김기용";//문자 여러개
	float weight = 60.3f; //실수 - 끝에 'f'를 붙인다.
	double height = 175.5; //실수
	//자료형의 크키 sizeof(자료형)
	printf("%d, %dByte\n",number,sizeof(number));
	printf("%c 강의장, %dByte\n",place,sizeof(place));
	printf("제 이름은%s 입니다, %dByte\n",name,sizeof(name));
	printf("제 몸무개는 %.2f kg입니다, %dByte\n",weight,sizeof(weight));
	printf("제 키는 %.2f cm입니다, %dByte\n",height,sizeof(height));


	return 0;
}