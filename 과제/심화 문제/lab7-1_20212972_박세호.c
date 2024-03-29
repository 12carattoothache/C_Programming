/*

//Lab1 : 배열에 출석 기록하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 16

int main (void) {
	int att_book[SIZE] = { 0 };
	int i, count = 0;

	double ratio;

	for (i = 0; i < SIZE; i++) {
		printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0): ", i + 1);
		scanf("%d", &att_book[i]);
	}

	for (i = 0; i < SIZE; i++) {
		if (att[i] == 0)
			count++;
	}

	ratio = count / 16.0;

	if (ratio > 0.3) {
		printf("수업 일수 부족입니다(%f%%). \n", ratio * 100.0);
	}

	return 0;
}


//Lab2 : 가장 싼 물건 찾기

#include <stdio.h>
#define SIZE 10
int main (void) {
	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int i, minimum;

	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", prices[i]);
	}
	printf("]\n");

	minimum = prices[0];

	for (i = 1; i < SIZE; i++) {
		if (prices[i] < minimum)
			minimum = prices[i];
	}

	printf("최소값은 %d입니다.\n", minimum);
	return 0;
}


//Lab2-1 도전문제 : 최댓값

#include <stdio.h>
#define SIZE 10

int main(void) {
	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int i, max;

	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", prices[i]);
	}
	printf("]\n");

	max = prices[0];
	for (i = 1; i < SIZE; i++) {
		if (prices[i] < max)
			max = prices[i];
	}

	printf("최대값은 %d입니다.\n", max);

	return 0;
}


//Lab3 : 배열에서 특정한 값 탐색하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void) {
	int key, i;
	int list[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	printf("[ ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", list[i]);
	}
	printf("]\n");

	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) {
			printf("탐색 성공 인덱스= %d\n", i);
			break;
		}
	}

	return 0;
}


//Lab4 : 버블 정렬을 그림으로 표시하기

#include <windows.h>
#include <stdio.h>

#define SIZE 10

int main(void) {
	int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 38, 99, 66 };

	for (int k = 0; k < SIZE; k++) {
		system("cls");

		for (int i = 0; i < SIZE - 1; i++) {
			if (list[i] > list[i + 1]) {
				int tmp = list[i]; list[i] = list[i + 1]; list[i + 1] = tmp;
			}
		}

		for (int i = 0; i < SIZE; i++) {
			for (int m = 0; m < list[i] / 10; m++) {
				printf("*");
			}
			printf("\n");
		}
		_getch();
	}

	return 0;
}


//Lab5 : 행렬

#include <stdio.h>

#define ROWS 3
#define COLS 3

int main (void) {
	int r, c;

	int A[ROWS][COLS] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
	int B[ROWS][COLS] = { { 1,0,0 }, { 0,1,0 }, { 0,0,1 } };
	int C[ROWS][COLS];

	for (r = 0; r < ROWS; r++) {
		for (c = 0; c < COLS; c++) {
			C[r][c] = A[r][c] + B[r][c];
			printf("%d ", C[r][c]);
		}
		printf("\n");
	}

	return 0;
}
*/