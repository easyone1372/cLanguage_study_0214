#include <stdio.h>


void main() {
	int num;
	printf("������ �Է����ּ���:");
	scanf("%d", &num);
	//&����: ������ �ּҰ��� �����Ͷ�

	printf("%d\n", num);

	char ch;
	printf("���ڸ� �Է����ּ���: ");
	scanf("%c", &ch);

	printf("%c\n", ch);

	float f;
	printf("�Ǽ��� �Է��� �ּ���: ");
	scanf("%f", &f);

	printf("%f\n", f);

	char name[30];
	printf("���ڿ��� �Է����ּ���: ");
	scanf("%s",name); //���ڿ��� scanf�� ����� �� &�� ���� �ʴ´�.
	printf("%s\n", name);
}