#include <stdio.h>

void main() {
	/*
	* 나이, 키, 이름, 혈액형을 키보드에서
	* 입력받아 다음과 같이 출력하도록 구현하라
	* 나이: ~세
	* 키: xxx.xcm
	* 이름: 000님
	* 혈액형: ~형
	*/

	int age;
	float tall;
	char name[10];
	char blood[10];

	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	printf("키를 입력하세요: ");
	scanf("%f", &tall);

	printf("이름을 입력하세요: ");
	scanf("%s", name);

	printf("혈액형을 입력하세요: ");
	scanf("%s", blood);

	printf("나이: %d\n", age);
	printf("키: %.1fcm\n", tall);
	printf("이름: %s님\n", name);
	printf("혈액형: %\n", blood);


}