/*
// - Lab : 유용한 배열 함수 작성

#include <stdio.h>
#define SIZE 5

double get_array_avg(int values[], int n);
void print_array(int values[], int n);

int main(void)
{
    int i;
    int data[SIZE] = { 10, 20, 30, 40, 50 };
    double result;

    print_array(data, SIZE);
    result = get_array_avg(data, SIZE);
    printf("배열 원소들의 평균 = %f\n", result);

    return 0;
}

// 배열 요소의 평균을 계산하는 함수
double get_array_avg(int values[], int n)
{
    int i;
    double sum = 0.0;

    for (i = 0; i < n; i++)
        sum += values[i];
    return sum / n;
}

// 배열 요소를 화면에 출력하는 함수
void print_array(int values[], int n)
{
    int i;
    printf("[ ");
    for (i = 0; i < n; i++)
        printf("%d ", values[i]);
    printf("]\n");
}
*/

/*
- Mini Project : 어드벤처 게임 만들기

간단한 텍스트 기반의 게임을 작성해보자. 
주인공은 ‘#’로 표시되어 있다
주인공이 금 ‘G’를 찾으면 게임이 종료된다. 
중간에 몬스터 ‘M’가 있어서 금을 찾는 것을 방해한다. 
주인공은 ‘w’, ‘s’, ‘a’, ‘d’ 키를 이용하여 상하좌우로 움직일 수 있다. 
몬스터는 랜덤하게 움직이는 것으로 하라.
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int map[10][10] = { 0, };

int check_win(int i, int j) {
    if (i == 9 && j == 9) {
        return 1;
    }

    else {
        return 0;
    }
}

void print_map(int ptr[][10]) {
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (ptr[i][j] == 0) {
                printf(". ");
            }
            else if (ptr[i][j] == 1) {
                printf("#");
            }
            else if (ptr[i][j] == 2) {
                printf("M");
            }
            else if (ptr[i][j] == 3) {
                printf("G");
            }
        }
        printf("\n");
    }
}

void move_char(int ptr[][10], int* x, int* y, int delt) {
    int a = *x, b = *y;
    switch (delt) {
    case 1: //w
        if (b != 0 && ptr[a][b - 1] != 2) {
            ptr[a][b] = 0;
            ptr[a][b - 1] = 1;
            *y -= 1;
        }
        break;
    case 2: //a
        if (a != 0 && ptr[a - 1][b] != 2) {
            ptr[a][b] = 0;
            ptr[a - 1][b] = 1;
            *x -= 1;
        }
        break;
    case 3: //d
        if (a != 9 && ptr[a + 1][b] != 2) {
            ptr[a][b] = 0;
            ptr[a + 1][b] = 1;
            *x += 1;
        }
        break;
    case 4: //s
        if (b != 9 && ptr[a][b + 1] != 2) {
            ptr[a][b] = 0;
            ptr[a][b + 1] = 1;
            *y += 1;
        }
        break;
    }
}

void move_monster(int ptr[][10], int* k, int* l) {
    int a = *k, b = *l;

    int delt = rand() % 4;

    switch (delt) {
    case 0: //w
        if (b != 0 && ptr[a][b - 1] != 3 && ptr[a][b - 1] != 1) {
            ptr[a][b] = 0;
            ptr[a][b - 1] = 2;
            *l -= 1;
        }
        break;
    case 1: //a
        if (a != 0 && ptr[a - 1][b] != 3 && ptr[a - 1][b] != 1) {
            ptr[a][b] = 0;
            ptr[a - 1][b] = 2;
            *k -= 1;
        }
        break;
    case 2: //s
        if (a != 9 && ptr[a + 1][b] != 3 && ptr[a + 1][b] != 1) {
            ptr[a][b] = 0;
            ptr[a + 1][b] = 2;
            *k += 1;
        }
        break;
    case 3: //d
        if (b != 9 && ptr[a][b + 1] != 3 && ptr[a][b + 1] != 1) {
            ptr[a][b] = 0;
            ptr[a][b + 1] = 2;
            *l += 1;
        }
        break;
    }
}

int main(void) {
    srand(time(NULL));

    int i = 0, j = 0;
    int k = 5, l = 5;

    map[i][j] = 1;

    map[k][l] = 2;

    map[9][9] = 3;


    char cmd;

    while (1) {
        system("cls");
        print_map(map);

        cmd = _getch();

        switch (cmd) {
        case 'w':
            move_char(map, &i, &j, 2);
            break;
        case 'a':
            move_char(map, &i, &j, 1);
            break;
        case 'd':
            move_char(map, &i, &j, 4);
            break;
        case 's':
            move_char(map, &i, &j, 3);
            break;
        }

        move_monster(map, &k, &l);

        if (check_win(i, j) == 1) {
            printf("어드벤처 게임이 종료되었습니다.\n");
            break;
        }
    }
    return 0;
}
*/