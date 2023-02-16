#include <stdio.h>


void main() {
	int num;
	printf("정수를 입력해주세요:");
	scanf("%d", &num);
	//&변수: 변수의 주소값을 가져와라

	printf("%d\n", num);

	char ch;
	printf("문자를 입력해주세요: ");
	scanf("%c", &ch);

	printf("%c\n", ch);

	float f;
	printf("실수를 입력해 주세요: ");
	scanf("%f", &f);

	printf("%f\n", f);

	char name[30];
	printf("문자열을 입력해주세요: ");
	scanf("%s",name); //문자열은 scanf를 사용할 때 &를 적지 않는다.
	printf("%s\n", name);
}