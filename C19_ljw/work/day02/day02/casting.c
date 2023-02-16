#include <stdio.h>

void main() {
	int i = 10;	//4byte
	double d = 3.14;	//8byte

	d = i;	//자동형변환

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

	//실수를 정수로 형변환을 하게 되면 소수점 이하 자리수가 소멸된다.

	int number = 100;
	printf("%f\n", (char)number);
}