#include <stdio.h>
int main_output() {
	int number = 11;
	char place = 'B'; // ���� 1�� - �����ǥ
	char name[] = "����";//���� ������
	float weight = 60.3f; //�Ǽ� - ���� 'f'�� ���δ�.
	double height = 175.5; //�Ǽ�
	//�ڷ����� ũŰ sizeof(�ڷ���)
	printf("%d, %dByte\n",number,sizeof(number));
	printf("%c ������, %dByte\n",place,sizeof(place));
	printf("�� �̸���%s �Դϴ�, %dByte\n",name,sizeof(name));
	printf("�� �������� %.2f kg�Դϴ�, %dByte\n",weight,sizeof(weight));
	printf("�� Ű�� %.2f cm�Դϴ�, %dByte\n",height,sizeof(height));


	return 0;
}