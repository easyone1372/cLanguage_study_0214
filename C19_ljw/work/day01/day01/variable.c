#include <stdio.h>

void main() {

	//변수
	//정수형 변수
	int i; //선언
	i = 100;//대입
	printf("%d\n", i);

	//문자형
	char ch; //선언
	ch = 'B';//대입
	printf("%c\n",ch);

	char ch2 = 65; //아스키코드로 A는 65
	printf("%c\n", ch2);

	//실수형
	float f = 3.14;
	printf("%.2f\n", f);
	printf("파이는 %.2f 입니다\n", f);

	double d = 1.23;
	printf("%lf", d); //lf로 해도 상관없고 f로 해도 상관없다.

	//문자열
	char str[] = "홍길동";
	printf("%s\n", str);

	//제 이름은 000입니다.
	//제 나이는 00살입니다.
	//제 키는 000.0cm입니다.

	char name[] = "이지원";
	int age = 23;
	float tall = 165.1;

	printf("내 이름은 %s이다.\m",name);
	printf("내 나이는 %d이다.\n", age);
	printf("내 키는 %.1f이다.\n", tall);
}