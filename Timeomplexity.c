#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;

int findGCD(int nummer, int GCD) {

	count++;

	if (GCD == 0) {
		return nummer;
	}
	else {
		return findGCD(GCD, nummer % GCD);
	}
}

int main() {

	int a = 0;
	int bigcount = 0;
	int bigone = 0;

	printf("수를 입력하세요: ");
	scanf("%d", &a);


	for(int i = 0; i < a; i++){

		int any = findGCD(a, i);												//시간 계산 시 사용

		//printf("i: %d, GCD: %d, 횟수: %d\n",i, findGCD(a, i), count);			//여러 개의 값을 확인할 때 사용
		
		if (count > bigcount) {
			bigcount = count;
			bigone = i;
		}

		count = 0;
	}

	printf("\n최고 반복 횟수: %d, 가장 많이 반복 한 수: %d", bigcount, bigone);

	return 0;
}

