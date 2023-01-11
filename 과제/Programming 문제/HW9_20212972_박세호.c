/*
// 1번
#include <stdio.h>
#define SIZE 10

int get_array_sum(int* A, int size) {
    int sum = 0;

    int i;
    for (i = 0; i < size; i++) {
        sum += A[i];
    }
    return sum;
}

int main(void) {
    printf("print_array()\n");

    int data[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int i;
    for (i = 0; i < SIZE; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    printf("배열 요소의 합 = %d\n", get_array_sum(data, SIZE));

    return 0;
}
*/

/*
// 2번

#include <stdio.h>
#define SIZE 5

void print_array_reverse(int* A, int size) {
    int i;

    for(i = 0; i < size; i++) {
        printf("%d ", *A);
        *--A;
    }
}

int main(void) {
    int data[SIZE] = {1, 2, 3, 4, 5};
    int i;

    for(i = 0; i < SIZE; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    printf("역순: ");
    print_array_reverse(&data[4], SIZE);
    printf("\n");

    return 0;
}
*/


/*
// 3번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void quadratic (int a, int b, int c, double* xplus, double* xminus) {
    *xminus = ( (-b - sqrt(b * b - 4 * a * c)) / (2 * a) );
    *xplus = ( (-b + sqrt(b * b - 4 * a * c)) / (2 * a) );
}

int main(void) {
    double xminus, xplus;
    int a, b, c;

    printf("2차 방적식의 계수를 입력하시오: \n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    if ((b * b - 4 * a * c) >= 0) {
        quadratic (a, b, c, &xplus, &xminus);
        printf("첫 번째 근 : %lf\n", xminus);
        printf("두 번째 근 : %lf\n", xplus);
    }

    else {
        printf("실근이 존재하지 않습니다!\n");
    }

    return 0;
}

*/

/*
// 4번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void get(double value, int* i_part, double* f_part) {
    *i_part = (int)value;
    *f_part = value - *i_part;
}

int main(void) {
    double input;

    int i_part;
    double f_part;

    printf("전달 받은 실수 = ");
    scanf("%lf", &input);

    get(input, &i_part, &f_part);

    printf("정수부 = %d \n", i_part);
    printf("소수부 = %lf \n", f_part);

    return 0;
}
*/


/*
// 5번
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEIGHT 10
#define WIDTH 10


void darken_image(char* p, int w, int h) { // 영상의 밝기를 줄이는 함수
    if (p[h * WIDTH + w] != 0) p[h * WIDTH + w]--;
}

void print_image(char* p, int x, int y) { // 영상을 화면으로 출력하는 함수
    printf("%02d ", p[x * WIDTH + y]);
}

int main(void) {
    srand(time(NULL));

    int i, j, k;
    char image[HEIGHT * WIDTH];

    for (k = 0; k < HEIGHT * WIDTH; k++) {
        image[k] = rand() % 10;
    }

    char* ptr = image;

    printf("처음 디지털 영상\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            print_image(ptr, i, j);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            darken_image(ptr, i, j);
        }
    }

    printf("각 픽셀의 밝기를 1씩 줄이고 난 후\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            print_image(ptr, i, j);
        }
        printf("\n");
    }

    return 0;
}
*/


/*
// 6번
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEIGHT 10
#define WIDTH 10

void brighten_image(char* p, int w, int h) { //영상의 밝기를 증가시키는 함수
    if (p[h * WIDTH + w] != 10) p[h * WIDTH + w]++;
}


void print_image(char* p, int x, int y) { // 영상을 화면으로 출력하는 함수
    printf("%02d ", p[x * WIDTH + y]);
}

int main(void) {
    srand(time(NULL));

    int i, j, k;
    char image[HEIGHT * WIDTH];

    for (k = 0; k < HEIGHT * WIDTH; k++) {
        image[k] = rand() % 10;
    }

    char* ptr = image;

    printf("처음 디지털 영상\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            print_image(ptr, i, j);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            brighten_image(ptr, i, j);
        }
    }

    printf("각 픽셀의 밝기를 1씩 증가시킨 후\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            print_image(ptr, i, j);
        }
        printf("\n");
    }

    return 0;
}
*/