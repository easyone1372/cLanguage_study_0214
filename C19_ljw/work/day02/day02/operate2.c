#include <stdio.h>

void main() {
	int num1 = 20, num2 = 20;
	int result;
	//1: 참, 0: 거짓
	result = 1 && 1;
	printf("result 1 : %d\n", result); //결과: 1

	result = num1 == 20 && num2 == 10;
	printf("result 2: %d\n", result); //결과: 1

	result = num1 > num2 && num1 == num2;
	printf("result 3: %d\n", result); //결과: 0

	//비트연산자
	int a = 3;	//00000011
	int b = 5;	//00000101

	printf("3 & 5: %d\n", a & b);
	printf("3 | 5: %d\n", a | b);
	printf("3 ^ 5: %d\n", a ^ b);
	printf("3 ~: %d\n", ~a);

	/*
	과수원이 있다.
	배, 사과, 오렌지를 키우고 있는데 하루에 생산되는 양은
	각각 5, 7, 5;

	과수원에서 하루에 생산되는 총 과일의 개수를 출력,
	시간당 전체 과일의 평균 개수를 출력
	평균값을 담는 변수는 float으로 할 것
	*/

	printf("----------------------------------\n");

	int pear = 5;
	int apple = 7;
	int orange = 5;

	int dayMake = pear + apple + orange;
	float reverage = (float)dayMake / 24;
	printf("하루에 생산되는 총 과일의 개수: %d\n", dayMake);
	printf("시간당 전체 과일의 평균 개수: %f\n", reverage);




}