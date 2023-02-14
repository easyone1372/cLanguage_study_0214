#include <stdio.h>

void main() {
	printf("hello world\n"); //모니터에 hello world를 출력하라
	//\n: 줄을 바꿔주는 기능이 있는 문자
	 
	
	//주석
	//프로그램에 아무런 영향을 주지 않는 문장
	//주석의 사용 목적
	//1.코드에 대한 설명을 할 때

	//주석 사용방법
	// 한 줄 주석: //
	/*
	여러줄
	주석을
	넣는법
	*/

	//출력을 하기 위한 형식지정자
	//정수형 형식지정자: %d
	//실수형 형식지정자: %f;
	//문자형 형식지정자: %c;
	//문자열 형식지정자: %s;
	//printf("형식지정자",데이터);

	printf("hi\n"); 
	//printf(100) -> 숫자의 경우 제대로 출력이 되지 않음.
	printf("%d\n", 100);
	printf("%c\n", 'A');	//문자형은 ''안에 한 글자만 들어갈 수 있다
	printf("%.2f\n", 3.14);	//원하는 소수점까지 볼 수 있다

	int number = 100; //변수의 초기화
	printf("%d\n", number);
	printf("%d\n", number);
	printf("%d\n", number);
	printf("%d\n", number);
	printf("%d\n", number);
	printf("%d\n", number);
	printf("%d\n", number);

	
}