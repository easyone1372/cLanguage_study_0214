#include <stdio.h>

void main() {
	int num1 = 7;
	int num2 = 3;
	printf(" %d + %d = %d\n", num1, num2, (num1 + num2));
	printf(" %d - %d = %d\n", num1, num2, (num1 - num2));
	printf(" %d * %d = %d\n", num1, num2, (num1 * num2));
	printf(" %d / %d = %d\n", num1, num2, (num1 + num2));
	printf(" %d % %d = %f\n", num1, num2, (num1 % num2));

	//���Կ�����
	num1 = 3;
	num2 = 4;

	//���մ��Կ�����
	num1 += 3; //num1 = num1 + 3;
	num2 *= 4; //num2 = num2 * 4;

	printf("num1+3�� ���: %d\n", num1);
	printf("num2*4�� ���: %d\n", num2);

	printf("--------------------\n");

	//�񱳿�����
	int a = 10, b = 11;
	int result = a == b;

	printf("a == b: %d\n", a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b :%d\n", a >= b);
	printf("a <= b: %d\n", a <= b);
	printf("a != b: %d\n", a != b);
	
	printf("--------------------\n");

	//����������
	a = 10, b = 10;
	printf("a : %d\n", a);
	printf("a : %d\n", ++a);
	printf("a : %d\n", a);

	printf("b : %d\n", b);
	printf("b : %d\n", b++); //1�� �����ֵ� �������� ����� ���� 1�� �����ش�.
	printf("b : %d\n", b);


	//¯���� �⸻��� ����
	//���� 86, ���� 75, ���� 88, ��ȸ 60, ���� 96
	//����� ����ϵ�, float���� ����ϱ�

	int kor = 86;
	int eng = 75;
	int math = 88;
	int social = 60;
	int sci = 96;
	float result1 = (kor + eng + math + social + sci) / 5;

	printf("¯���� �⸻��� ���: %.1f", result1);
}