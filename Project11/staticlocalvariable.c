#include<stdio.h>

void Test() {
	int data = 0;
	printf("%d, ", data++);
}

void main() {
	int i;
	for (i = 0; i < 5; i++) {
		Test();
	}
}
//지역변수의 생명주기는 해당 함수가 끝날때 까지이다.
// 즉,for문이 반복될때마다 계속 리셋된다.