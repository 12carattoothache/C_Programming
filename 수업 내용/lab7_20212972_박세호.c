/*
#include<stdio.h>

int main(void) {
	int i;
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < 5; i++)
		printf("scores[%d] = %d \n", i, scores[i]);

	return 0;
}


#include<stdio.h>
#define SIZE 26

int main(void) {
	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++)
		codes[i] = 'a' + i;

	for (i = 0; i < SIZE; i++)
		printf(" %c ", codes[i]);
	printf("\n");

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define STUDENTS 5
// 66-69 pages

int main(void) {
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {
		printf("학생들의 성적을 입력하십시오: ");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}

		average = sum / STUDENTS;
		printf("성적 평균: %d\n", average);
	
	return 0;
}


#include<stdio.h>

int main(void) {
	int scores[5] = { 31, 63, 62, 87, 14 };
	int i;

	for (i = 0; i < 5; i++) {
		printf("scores[%d] = %d\n", i, scores[i]);
	}
	return 0;
}


#include<stdio.h>

#define SIZE 5

int main(void) {
	int i, k;
	int counter;
	int list[SIZE] = { 16, 7, 9, 11, 13 };

	for (i = 0; i < SIZE; i++) {
		printf("%d\n", list[i]);
	}

	// sorting the elements
	for (k = 0; k < SIZE; k++) {
		counter = 0;
		for (i = 0; i < SIZE - 1 - k; i++) {
			if (list[i] > list[i + 1]) {

				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;

				counter += 1;
			}
		}

		if (counter == 0) {
			printf("quick!\n");
			break;
		}

	}

	printf("========\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d\n", list[i]);
	}

	return 0;
}


#include<stdio.h>

int main(void) {
	int i, j;
	int a[3][5] = {
		{0,1,2,3,4},
		{0,1,2,3,4},
		{0,1,2,3,4}
	};

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("a[%d][%d] = %d, ", i, j, a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/