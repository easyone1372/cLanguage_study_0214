#include <stdio.h>

void main() {
	int num1 = 20, num2 = 20;
	int result;
	//1: ��, 0: ����
	result = 1 && 1;
	printf("result 1 : %d\n", result); //���: 1

	result = num1 == 20 && num2 == 10;
	printf("result 2: %d\n", result); //���: 1

	result = num1 > num2 && num1 == num2;
	printf("result 3: %d\n", result); //���: 0

	//��Ʈ������
	int a = 3;	//00000011
	int b = 5;	//00000101

	printf("3 & 5: %d\n", a & b);
	printf("3 | 5: %d\n", a | b);
	printf("3 ^ 5: %d\n", a ^ b);
	printf("3 ~: %d\n", ~a);

	/*
	�������� �ִ�.
	��, ���, �������� Ű��� �ִµ� �Ϸ翡 ����Ǵ� ����
	���� 5, 7, 5;

	���������� �Ϸ翡 ����Ǵ� �� ������ ������ ���,
	�ð��� ��ü ������ ��� ������ ���
	��հ��� ��� ������ float���� �� ��
	*/

	printf("----------------------------------\n");

	int pear = 5;
	int apple = 7;
	int orange = 5;

	int dayMake = pear + apple + orange;
	float reverage = (float)dayMake / 24;
	printf("�Ϸ翡 ����Ǵ� �� ������ ����: %d\n", dayMake);
	printf("�ð��� ��ü ������ ��� ����: %f\n", reverage);




}