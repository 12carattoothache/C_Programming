/*
// Lab1: 온도 변환 함수
# include <stdio.h>

double FtoC(double temp_f); 

int main (void) {
	double c, f;
	f = 32.0;
	c = FtoC(f); 

	printf("화씨온도 %lf은 섭씨온도 %lf에 해당한다. \n", f, c);

	return 0;
}

double FtoC(double temp_f) {
	double temp_c;

	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;

	return temp_c;
}
*/


/*
//Lab2 : 소수 검사 함수 작성
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int check_prime(int);

int main (void) {
	int k;

	printf("정수를 입력하시오: ");
	scanf("%d", &k);

	if (check_prime(k) == 1) {
		printf("소수입니다. \n");
	}

	else {
		printf("소수가 아닙니다. \n");
	}

	return 0;
}

int check_prime(int n) {
	int is_prime = 1; 
	for (int i = 2; i < n; ++i) {
		if (n % i == 0) { 
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}
*/


/*
// Lab3 : 소수의 합 찾기
# include <stdio.h>

int check_prime(int n);

int main (void) {
	int n, flag = 0;

	printf("양의 정수를 입력하시오: ");
	scanf_s("%d", &n);

	for (int i = 2; i < n; i++) {
		if (check_prime(i) == 1) {
			if (check_prime(n - i) == 1) {
				printf("%d = %d + %d\n", n, i, n - i);
				flag = 1;
			}
		}
	}

	if (flag == 0) {
		printf("%d은 소수들의 합으로 표시될 수 없습니다.\n", n);
	}

	return 0;
}

int check_prime(int n) {
	int is_prime = 1; // 일단 소수라고 가정한다.

	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			is_prime = 0;
			break;
		}
	}

	return is_prime;
}
*/


/*
// Lab4 : 피보나치 수열 계산(순환 버전)
# include <stdio.h>

int fibbonacci(int n);

int main (void) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", fibbonacci(i));
	}
}

int fibbonacci(int n) {
	if (n == 0) {
		return 0;
	}

	else if (n == 1) {
		return 1;
	}

	else {
		return (fibbonacci(n - 1) + fibbonacci(n - 2));
	}
}
*/


/*
// Lab5 : 로또 번호 생성하기
# include <stdio.h>
# include <time.h>

# define MAX 45

int main (void) {
	int i, k, lotto[6] = { 0 };
	int dup_check[MAX + 1] = { 0 };

	srand(time(NULL));

	for (i = 0; i < 6; i++)	{
		k = 1 + (rand() % MAX);
		while (dup_check[k] == 1)
			k = 1 + (rand() % MAX);
		lotto[i] = k;
		dup_check[k] = 1;
		printf("%d ", lotto[i]);
	}

	return 0;
}
*/


/*
// Lab6 : 테일러 급수 계산하기
# define _CRT_SECURE_NO_WARNINGS
# include <stdlib.h>
# include <stdio.h>

double power(int x, int y);
double factorial(int n);

int main (void) {
	double sum = 0.0;
	int x, n;

	printf("x와 n의 값을 입력하시오: ");
	scanf("%d %d", &x, &n);

	for (int i = 0; i <= n; i++) {
		sum += power(x, i) / factorial(i);
		}

	printf("e^%d = %.3lf\n", x, sum);

	return 0;
}

double power(int x, int y) {
	double result = 1.0;

	for (int i = 0; i < y; i++) {
		result *= x;
	}

	return result;
}

double factorial(int n) {
	double result = 1.0;

	if (n <= 1) {
		return 1;
	}

	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	return result;
}
*/


/*
// Mini Project : ATM 만들기
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int total = 10000;
int a = 1;

void check() {
	printf("잔고는 %d원 입니다.", total);
}

void in() {
	int input;
	printf("입금 금액을 입력하세요: ");
	scanf("%d", &input);
	getchar();
	total += input;
}

void out() {
	int output;
	printf("인출 금액을 입력하세요: ");
	scanf("%d", &output);
	getchar();
	total -= output;
}

void stop() {
	printf("종료합니다.\n");
	a = 0;
}

void main(void) {
	char mod;

	while (a) {
		printf("Mini Pro ATM\n");
		printf("기능을 선택하세요.\n");
		printf("1) 잔고확인\n");
		printf("2) 입금\n");
		printf("3) 인출\n");
		printf("4) 종료\n");

		mod = getchar();
		getchar();

		switch (mod) {
		case '1':
			check();
			break;
		case '2':
			in();
			break;
		case '3':
			out();
			break;
		case '4':
			stop();
			break;
		}
	}
}
*/