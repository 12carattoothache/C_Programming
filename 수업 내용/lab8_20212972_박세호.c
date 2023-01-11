/*
// 예제1
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int get_integer()
{
	int value;
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);
	return value;
}

int main(void)
{
	int x = get_integer();
	int y = get_integer();

	int result = x + y;
	printf("두수의 합 = %d \n", result);

	return 0;
}
*/

/*
// 예제2
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int get_integer()
{
	int value;
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);
	return value;
}

int get_max(int x, int y)
{
	if (x > y) return(x);
	else return(y);
}

int main (void)
{
	int a = get_integer();
	int b = get_integer();

	printf("두수 중에서 큰 수는 %d입니다.\n", get_max(a, b));

	return 0;

}
*/


/*
// 예제3
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int get_integer()
{
	int value;
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);
	return value;
}

int power (int x, int y)
{
	int i, result = 1;
	for (i = 0; i < y; i++)
		result *= x; // result = result * x
	return result;
}

int main (void)
{
	int x = get_integer(); // 함수를 호출한다.
	int y = get_integer(); // 함수를 호출한다.
	int result = power(x, y);

	printf("%d의 %d승 = %d \n", x, y, result);

	return 0;
}
*/


/*
// 예제 : 저장 유형 지정자 static
#include <stdio.h>

void sub(void) {
	int auto_count = 0;
	static int static_count = 0;

	auto_count++;
	static_count++;

	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
}
int main(void) {
	sub();
	sub();
	sub();
	return 0;
}
*/

/*
// 예제 : 순환호출
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial (int n);

int main (void) {
	int x = 0, result;

	printf("정수를 입력하시오:");
	scanf("%d", &x);

	result = factorial(x);
	printf("%d!은 %d입니다.\n", x, result);

	return 0;
}
int factorial (int n) {
	printf("factorial(%d)\n", n);

	if (n <= 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
*/


/*
// 예제 : 랜덤함수
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45

int main(void) {
	int i;

	srand(time(NULL));

	for (i = 0; i < 6; i++) {
		printf("%d ", 1 + rand() % MAX);
	}

	return 0;
}
*/