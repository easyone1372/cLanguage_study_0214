#include <stdio.h>

void main() {
	int i = 10;	//4byte
	double d = 3.14;	//8byte

	d = i;	//�ڵ�����ȯ

	printf("%f\n", d);

	int i2 = 65; //4byte
	char c = 'B';	//8byte
	i = c;

	printf("%d\n", i2);

	printf("%c\n",c);

	double d2 = 3.14;//8byte
	int i3 = 100;
	i3 = d2;

	printf("%d\m", i3);

	//�Ǽ��� ������ ����ȯ�� �ϰ� �Ǹ� �Ҽ��� ���� �ڸ����� �Ҹ�ȴ�.

	int number = 100;
	printf("%f\n", (char)number);
}