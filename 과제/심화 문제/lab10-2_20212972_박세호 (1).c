/*
// lab1 - 문자열 전처리하기
#include <stdio.h>

int main(void) {
    char line[100] = "";
    char line2[100] = "";

    printf("문자열을 입력하시오 : ");
    gets_s(line, sizeof(line));

    int k = 0;

    int i;
    for (i = 0; line[i] != '\0'; i++) {
        if ('A' <= line[i] && line[i] <= 'z') {
            line2[k++] = line[i];
        }
    }
    line2[k] = '\0';

    printf("출력 문자열 : %s\n", line2);
    return 0;
}
*/


/*
// lab2 - 사용자로부터 패스워드 입력받기

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char password[10];
    int i;

    system("cls");
    printf("패스워드를 입력하시오 : ");
    for (i = 0; i < 8; i++) {
        password[i] = _getch();
        printf("*");
    }

    password[i] = '\0';
    printf("\n");

    printf("입력된 패스워드는 다음과 같습니다 : ");
    printf("%s\n", password);

    _getch();

    return 0;
}
*/


/*
// lab3 - 화살표 키 입력받기
#include <stdio.h>
#include <conio.h>

int main(void) {
    char board[10][10] = {
        {'#', '#', '#', '#', '.', '.', '.', '.', '.', '.' },
        {'.', '.', '.', '.', '.', '#', '.', '.', '.', '.' },
        {'#', '#', '#', '.', '#', '.', '.', '.', '.', '.' },
        {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.' },
        {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.' },
        {'.', '.', '#', '.', '.', '#', '.', '.', '.', '.' },
        {'.', '.', '.', '#', '.', '.', '#', '#', '.', '.' },
        {'.', '.', '.', '.', '#', '.', '.', '.', '#', '#' },
        {'.', '.', '.', '.', '.', '#', '.', '.', '.', '.' },
        {'.', '.', '.', '.', '.', '#', '#', '#', '#', '#' } 
    };

    int xpos = 0, ypos = 1;
    board[ypos][xpos] = '@';

    int x, y;

    while (1) {
        system("cls");
        printf("왼쪽이동 : <-, 오른쪽 이동 : -> 위쪽 이동 : ^, 아래쪽 이동 : V\n");

        for (y = 0; y < 10; y++) {
            for (x = 0; x < 10; x++)
                printf("%c", board[y][x]);
            printf("\n");
        }
        board[ypos][xpos] = '.';

        int ch = _getch();
        if (ch == 224) {
            int ch2 = _getch();
            if (ch2 == 75) xpos--;
            else if (ch2 == 80) ypos++;
            else if (ch2 == 72) ypos--;
            else if (ch2 == 77) xpos++;
        }
        board[ypos][xpos] = '@';
    }

    return 0;
}
*/


/*
// lab4 - 단답형 퀴즈 채점
#include <stdio.h>
#include <string.h>

int main(void) {
    char key[] = "C";
    char buffer[80] = "";

    do {
        printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
        gets_s(buffer, sizeof(buffer));
    }
    while (strcmp(key, buffer) != 0);

    printf("맞았습니다!\n");

    return 0;
}
*/


/*
// lab5 - 행맨

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    char solution[100] = "meet at midnight"; // 정답이 들어 있는 문자 배열
    char answer[100] = "____ __ ________"; // 현재까지 사용자가 맞춘 문자열
    char ch;
    int i;

    while (1) {
        printf("\n문자열을 입력하시오: %s\n", answer);
        printf("글자를 추측하시오: ");
        ch = _getch();

        // 사용자가 입력한 문자를 answer[]에 넣어서 정답을 비교한다.
        for (i = 0; solution[i] != NULL; i++) {

            // 사용자가 맞추었으면 글자를 보이게 한다.
            if (solution[i] == ch)
                answer[i] = ch;
        }
        if (strcmp(solution, answer) == 0) { // 정답과 일치하는 지를 검사     
            printf("\n정답 : meet at midnight\n");
            break;
        }
    }

return 0;
}
*/


/*
// lab6 - 단어 애나그램 게임
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SOL "apple"

    int main(void) {
    char s[100] = SOL;
    char ans[100];
    int i, len;

    len = strlen(s);

    for (i = 0; i<len; i++) {
        int pos1 = rand() % len;
        int pos2 = rand() % len;
        char tmp = s[pos1];
        s[pos1] = s[pos2];
        s[pos2] = tmp;
    }

    do {
        printf("%s의 원래단어를 맞춰보세요: ", s);
        scanf("%s", ans);
    }
    while (strcmp(ans, SOL) != 0);

    printf("축하합니다. \n");
    return 0;
}
*/


/*
// la7 - 한영 사전의 구현
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define WORDS 5

int main(void) {

    int i;
    char dic[WORDS][2][30] = {
    { "book", "책" },
    { "boy", "소년" },
    { "computer", "컴퓨터" },
    { "language", "언어" },
    { "rain", "비" },
    };
    char word[30];

    printf("단어를 입력하시오 : ");
    scanf("%s", word);

    for (i = 0; i < WORDS; i++) {
        if (strcmp(dic[i][0], word) == 0) {
            printf("%s : %s\n", word, dic[i][1]);
            return 0;
        }
    }
    printf("사전에서 발견되지 않았습니다.\n");

    return 0;
}
*/


/*
// lab8 - 문자열 정렬
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 6

int main(void) {
    int i, k;
    char fruits[SIZE][20] = {
        "pineapple",
        "banana",
        "apple",
        "tomato",
        "pear",
        "avocado"
    };

    printf("정렬 전\n");
    for (k = 0; k < SIZE; k++) {
        printf("%s\n", fruits[k]);
    }
    printf("\n\n");

    for (k = 0; k < SIZE; k++) {
        for (i = 0; i < SIZE - 1; i++) {
            if (strcmp(fruits[i], fruits[i + 1]) > 0) {
                char tmp[20];
                strcpy(tmp, fruits[i]);
                strcpy(fruits[i], fruits[i + 1]);
                strcpy(fruits[i + 1], tmp);
            }
        }
    }

    printf("정렬 후\n");
    for (k = 0; k < SIZE; k++) {
        printf("%s\n", fruits[k]);
    }

    return 0;
}
*/

/*
// mini project 1 - 텍스트 암호화
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 20

void XOR (char* String, int* Key) {
    int i;
    for(i = 0; i < strlen(String); i++)
        String[i] ^= *Key;
}

int main(void) {
    char string[SIZE];
    int key[SIZE];

    printf("암호화 전의 문자열 = ");
    gets_s(string, sizeof(string));

    printf("암호화 키 = ");
    scanf("%d", &key);

    printf("\n");

    XOR(string, &key);
    printf("암호화 후의 문자열 = %s\n", string);

    XOR(string, &key);
    printf("복호화 후의 문자열 = %s\n", string);

    return 0;
}
*/


/*
// mini project 2 - 텍스트 압축
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

void compress(char* original, char* modified) {
    char buf, buf2;
    char strbuf[SIZE] = "";

    int counter = 1;
    int i;

    buf = original[0];
    for (i = 1; i <= strlen(original); i++) {

        buf2 = original[i];
        if (buf == buf2) {
            counter++;
        }
        else if (buf != buf2) {
            sprintf(strbuf, "%d%c", counter, buf);
            strcat(modified, strbuf);
            buf = buf2;
            counter = 1;
        }
    }
}

int main(void) {
    char string[SIZE] = "";
    char compressed[SIZE] = "";

    printf("문자열을 입력하시오 : ");
    gets_s(string, sizeof(string));

    compress(string, compressed);

    printf("압축 후 문자열 = %s\n", compressed);

    return 0;
}
*/