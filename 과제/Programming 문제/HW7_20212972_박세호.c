/*
// 1번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main (void) {
    int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i;

    for (i = 0; i < 12; i++) {
        printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]);
    }

    return 0;
}
*/


/*
// 2번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main (void) {
    int array[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 3; i++) {
        printf("%d ", array[2-i]);
    }

    return 0;
}
*/


/*
// 3번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# define ARRAYSIZE 100

int main(void) {
    int i, n;
    int sum = 0;
    int array[ARRAYSIZE];

    printf("입력할 정수의 개수(%d개 이하로 입력) : ", ARRAYSIZE);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d번째 요소를 입력하시오 : ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        sum += array[i];
    }

    printf("합 : %d\n", sum);

    return 0;
}
*/


/*
// 4번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

# define ARRAYSIZE 5

int main (void) {
    int i;
    int max, min;
    max = min = 0;
    int array[ARRAYSIZE];

    for (i = 0; i < ARRAYSIZE; i++) {
        printf("정수를 입력하시오: ");
        scanf("%d", &array[i]);
    }

    max = array[0];
    for (i = 0; i < ARRAYSIZE; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }

    min = array[0];
    for (i = 0; i < ARRAYSIZE; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    }

    printf("최대값 = %d 최소값 = %d\n", max, min);

    return 0;
}
*/


/*
// 5번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main (void) {
    int student, score;
    int array[3][3] = {
        {30, 10, 11},
        {40, 90, 32},
        {70, 65, 56}
    };
    int sum[3] = { 0, 0, 0 };

    for (student = 0; student < 3; student++) {
        for (score = 0; score < 3; score++) {
            sum[student] += array[student][score];
        }
    }

    for (student = 0; student < 3; student++) {
        printf("학번 %d의 평균: %d \n", student + 1, sum[student] / 3);
    }

    return 0;
}
*/


/*
// 6번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main (void) {
    int i, j;
    int a, b;
    int array[10][10];

    for (i = 0; i < 10; i++) { 
        for (j = 0; j < 10; j++) {
            array[i][j] = i * j;
        }
    }

    printf("알고싶은 구구단을 입력하시오(예. 9 3): ");
    scanf("%d %d", &a, &b);
    printf("%d * %d = %d\n", a, b, array[a][b]);

    return 0;
}
*/


/*
// 7번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
    int array1[3][3];
    int array2[3][3];
    int array3[3][3];
    int i, j, k;

    printf("행 개수 = 3\n");
    printf("열 개수 = 3\n\n");

    printf("첫 번째 행렬 입력 = \n");
    scanf("%d %d %d", &array1[0][0], &array1[0][1], &array1[0][2]);
    scanf("%d %d %d", &array1[1][0], &array1[1][1], &array1[1][2]);
    scanf("%d %d %d", &array1[2][0], &array1[2][1], &array1[2][2]);

    printf("두 번째 행렬 입력 = \n");
    scanf("%d %d %d", &array2[0][0], &array2[0][1], &array2[0][2]);
    scanf("%d %d %d", &array2[1][0], &array2[1][1], &array2[1][2]);
    scanf("%d %d %d", &array2[2][0], &array2[2][1], &array2[2][2]);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            array3[i][j] = 0; 
            for (k = 0; k < 3; k++) {
                array3[i][j] += array1[i][k] * array2[k][j]; 
            }
        }
    }

    printf("\n행렬 곱 결과 :\n");
    printf("%d %d %d\n", array3[0][0], array3[0][1], array3[0][2]);
    printf("%d %d %d\n", array3[1][0], array3[1][1], array3[1][2]);
    printf("%d %d %d\n", array3[2][0], array3[2][1], array3[2][2]);


    return 0;
}
*/


/*
// 8번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void) {
    int array1[3][3];
    int array_inv[3][3];
    int i, j;

    printf("행 개수 = 3\n");
    printf("열 개수 = 3\n\n");
    printf("행렬 입력 = \n");
    scanf("%d %d %d", &array1[0][0], &array1[0][1], &array1[0][2]);
    scanf("%d %d %d", &array1[1][0], &array1[1][1], &array1[1][2]);
    scanf("%d %d %d", &array1[2][0], &array1[2][1], &array1[2][2]);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            array_inv[i][j] = array1[j][i];
        }
    }

    printf("\n전치 행렬 = \n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", array_inv[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


/*
// 9번 문제
# define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main (void) {
    srand(time(NULL));

    int i;
    int random, max;
    int count[10] = {};

    for (i = 0; i < 100; i++) {
        random = rand() % 10;
        count[random]++;
    }

    max = 0;
        for (i = 0; i < 10; i++) {
            if (count[max] < count[i]) {
                max = i;
            }
    }

    printf("가장 많이 생성된 수: %d\n", max);

    return 0;
}
*/


/*
// 10번 문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    srand(time(NULL));

    int i;
    int random;
    int count[6] = {};

    for (i = 0; i < 60000; i++) {
        random = rand() % 6;
        count[random]++;
    }

    printf("==================================\n");
    printf("주사위면                  빈도\n");
    printf("==================================\n");

    for (i = 0; i < 6; i++) {
        printf("%d                         %d\n", i+1 ,count[i]);
    }

    return 0;
}
*/


/*
// 11번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

# define ARRAYSIZE 100

int main (void) {
    int i, n;
    int array[ARRAYSIZE];
    int count[ARRAYSIZE] = {};

    printf("입력할 자연수의 개수(%d개 이내로): ", ARRAYSIZE);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        count[array[i]]++;
    }

    for (i = 0; i < n; i++) {
        if (count[i] > 0) {
            printf("%d 값은 %d번 등장\n", i, count[i]);
        }
    }

    return 0;
}
*/


/*
// 12번 문제
# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>

# define ARRAYSIZE 100

int main (void) {
    int i, n;
    int del;
    int array[ARRAYSIZE];

    printf("입력할 자연수의 개수(%d개 이내로): ", ARRAYSIZE);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d번째 요소를 입력하시오: ", i);
        scanf("%d", &array[i]);
    }

    printf("삭제할 위치: ");
    scanf("%d", &del);

    for (i = del; i < n; i++) {
        array[i] = array[i+1];
    }

    printf("새로운 배열: ");

    for (i = 0; i < n-1; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
*/


/*
// 13번 문제
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

# define ARRAYSIZE 10

int main (void) {
    int i, n;
    int reserve[ARRAYSIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char ch;

    while (1) {
        printf("좌석을 예약하시겠습니까?(y 또는 n): ");
        ch = getchar();
        getchar();

        if (ch == 'y') {
            printf("------------------------------\n");
            printf("1  2  3  4  5  6  7  8  9  10\n");
            printf("------------------------------\n");

            for (i = 0; i < ARRAYSIZE; i++) {
                printf("%d  ", reserve[ARRAYSIZE]);
                printf("\n");
            }

            printf("몇번째 좌석을 예약하시겠습니까?: ");
            scanf("%d", &n);

            reserve[n] = 1;
            printf("예약 되었습니다.\n\n");
        }

        else if (ch == 'n') {
            break;
        }
        getchar();
    }

    return 0;
}
*/


/*
// 14번 문제
# define _CRT_SECURE_NO_WARNINGS

# include<stdio.h>
# include<math.h>

#define ARRAYSIZE 5

int main (void) {
    int i;

    double m, v, s;
    m = v = s = 0;

    double array[ARRAYSIZE];

    for (i = 0; i < ARRAYSIZE; i++) {
        printf("실수를 입력하시오: ");
        scanf("%lf", &array[i]);
    }

    for (i = 0; i < ARRAYSIZE; i++) {
        m += array[i];
    }

    m /= ARRAYSIZE;

    for (i = 0; i < ARRAYSIZE; i++) {
        v += (array[i] - m) * (array[i] - m);
    }

    v = v / ARRAYSIZE;
    s = sqrt(v);

    printf("평균: %.6lf \n", m);
    printf("표준편차: %.6lf \n", s);

    return 0;
}
*/


/*
// 15번 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main (void) {
    srand(time(NULL));

    int i;
    int random;
    int place = 5;
    int tile[10] = {};

    while (1) {
        if (place == -1 || place == 11) {
            break;
        }

        for (i = 0; i < 10; i++) {
            tile[i] = 0;
        }
        tile[place] = 1;

        for (i = 0; i < 10; i++) {
            if (tile[i] == 0) {
                printf("-");
            }
            else {
                printf("*");
            }
        }
        printf("\n");

        random = rand() % 2;
        if (random == 0) {
            place++;
        }
        else {
            place--;
        }
        _getch();
    }

    return 0;
}
*/