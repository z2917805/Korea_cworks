#include <stdio.h>
//�� ���� ����ϴ� �Լ�
int add(int , int); //�Լ� �����
int sub(int , int);
int main_Function1() {
	int result1, result2;
	result1 = add(10, 20);//���ϱ�

	result2 = sub(10, 20); //����

	printf("���Ѱ��:%d\n", result1);
	printf("�� ���:%d\n", result2);
	return 0;
}

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}