#include <stdio.h>

void main() {
	int num1 = 7;
	int num2 = 3;
	printf(" %d + %d = %d\n", num1, num2, (num1 + num2));
	printf(" %d - %d = %d\n", num1, num2, (num1 - num2));
	printf(" %d * %d = %d\n", num1, num2, (num1 * num2));
	printf(" %d / %d = %d\n", num1, num2, (num1 + num2));
	printf(" %d % %d = %f\n", num1, num2, (num1 % num2));

	//대입연산자
	num1 = 3;
	num2 = 4;

	//복합대입연산자
	num1 += 3; //num1 = num1 + 3;
	num2 *= 4; //num2 = num2 * 4;

	printf("num1+3의 결과: %d\n", num1);
	printf("num2*4의 결과: %d\n", num2);

	printf("--------------------\n");

	//비교연산자
	int a = 10, b = 11;
	int result = a == b;

	printf("a == b: %d\n", a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b :%d\n", a >= b);
	printf("a <= b: %d\n", a <= b);
	printf("a != b: %d\n", a != b);
	
	printf("--------------------\n");

	//증감연산자
	a = 10, b = 10;
	printf("a : %d\n", a);
	printf("a : %d\n", ++a);
	printf("a : %d\n", a);

	printf("b : %d\n", b);
	printf("b : %d\n", b++); //1을 더해주되 다음번에 사용할 때는 1을 더해준다.
	printf("b : %d\n", b);


	//짱구의 기말고사 성적
	//국어 86, 영어 75, 수학 88, 사회 60, 과학 96
	//평균을 계산하되, float으로 출력하기

	int kor = 86;
	int eng = 75;
	int math = 88;
	int social = 60;
	int sci = 96;
	float result1 = (kor + eng + math + social + sci) / 5;

	printf("짱구의 기말고사 평균: %.1f", result1);
}