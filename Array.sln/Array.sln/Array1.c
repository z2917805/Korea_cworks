#include <stdio.h>

int main() {
	//��Ұ� 5���� ������ �迭 score ����
	int score[] = {86, 70, 90, 70, 85};
	int n; //�ݺ�����
	int total = 0; // �հ躯���� �׻� 0���� ����
	double avg = 0.0; // ��� ����
	//Ư�� ��ҿ� ����(��ȸ)
	printf("score[1] = %d\n",score[1]);
	printf("score[4] = %d\n",score[4]);

	//��� ����
	score[2] = 95;
	printf("score[2] = %d\n", score[2]);

	//��� �߰�
	//score[5] = 100;

	//��ü ��ȸ(�˻�)
	for (n = 0; n < 5;n++) {
		printf("%d\n", score[n]);
	}

	//����� �հ�
	printf("%d\n", score[0] + score[1]);
	
	for (n = 0; n < 5; n++) {
		total += score[n];//total = total + score[n];
	}
	printf("�հ�: %d\n", total);

	//����� ��� = �հ� / ���
	//����� �������̹Ƿ� double�� ���� ����ȯ�ؾ���
	avg = (double)total / 5;
	printf("�հ�: %d\n", total);
	printf("���: %.1lf\n", avg);
	return 0;
}