#include <stdio.h>

void main() {
	/*
	* ����, Ű, �̸�, �������� Ű���忡��
	* �Է¹޾� ������ ���� ����ϵ��� �����϶�
	* ����: ~��
	* Ű: xxx.xcm
	* �̸�: 000��
	* ������: ~��
	*/

	int age;
	float tall;
	char name[10];
	char blood[10];

	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);

	printf("Ű�� �Է��ϼ���: ");
	scanf("%f", &tall);

	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", name);

	printf("�������� �Է��ϼ���: ");
	scanf("%s", blood);

	printf("����: %d\n", age);
	printf("Ű: %.1fcm\n", tall);
	printf("�̸�: %s��\n", name);
	printf("������: %\n", blood);


}