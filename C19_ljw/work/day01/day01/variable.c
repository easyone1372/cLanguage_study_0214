#include <stdio.h>

void main() {

	//����
	//������ ����
	int i; //����
	i = 100;//����
	printf("%d\n", i);

	//������
	char ch; //����
	ch = 'B';//����
	printf("%c\n",ch);

	char ch2 = 65; //�ƽ�Ű�ڵ�� A�� 65
	printf("%c\n", ch2);

	//�Ǽ���
	float f = 3.14;
	printf("%.2f\n", f);
	printf("���̴� %.2f �Դϴ�\n", f);

	double d = 1.23;
	printf("%lf", d); //lf�� �ص� ������� f�� �ص� �������.

	//���ڿ�
	char str[] = "ȫ�浿";
	printf("%s\n", str);

	//�� �̸��� 000�Դϴ�.
	//�� ���̴� 00���Դϴ�.
	//�� Ű�� 000.0cm�Դϴ�.

	char name[] = "������";
	int age = 23;
	float tall = 165.1;

	printf("�� �̸��� %s�̴�.\m",name);
	printf("�� ���̴� %d�̴�.\n", age);
	printf("�� Ű�� %.1f�̴�.\n", tall);
}