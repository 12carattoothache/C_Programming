/*
// 1번

#include <stdio.h>
#define SIZE 50

void countor(char* Str, int* table) {
    char buf[SIZE];
    int i = 0;

    while (Str[i] != 0) {
        buf[i] = tolower(Str[i++]);
    }

    for (i = 0; buf[i] != 0; i++) {
        if ('a' <= buf[i] && buf[i] <= 'z')
            table[buf[i] - 97]++;
    }
}

void prints(int* table) {
    int i;
    for (i = 0; i < 24; i++) {
        if (table[i] > 0) {
            printf("%c 문자가 %d번 등장하였음!\n", i + 97, table[i]);
        }
    }      
}

int main(void) {
    char str[SIZE];
    int count[24] = { 0, };

    printf("텍스트를 입력하시오 : ");
    gets_s(str, 49);

    countor(str, count);
    prints(count);

    return 0;
}
*/

/*
// 2번

#include <stdio.h>
#define SIZE 50

int main(void) {
    char str[SIZE];
    int i = 0;

    printf("텍스트를 입력하시오 : ");
    gets_s(str, sizeof(str));

    while (str[i] != 0) {
        printf("%c", toupper(str[i++]));
    }
    printf("\n");
    return 0;
}
*/

/*
// 3번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

void erase_blank(char* original, char* modified) {
    char buf, buf2;
    char strbuf[SIZE] = "";
    int counter = 1;
    int i, j;

    buf = original[0];
    for(i = 1; i <= strlen(original); i++) {
        buf2 = original[i];
        if (buf == buf2) {
            counter++;
        }

        else {
            if (buf == 32) {
                sprintf(strbuf, "%c", buf);
                strcat(modified, strbuf);
            }

            else {
                for(j = 0; j < counter; j++) {
                    sprintf(strbuf, "%c", buf);
                }
                strcat(modified, strbuf);
            }

            buf = buf2;
            counter = 1;
        }
    }
}

int main(void) {
    char string[SIZE] = "";
    char compressed[SIZE] = "";

    printf("문장을 입력하시오 : ");
    gets_s(string, sizeof(string));
    printf("\n");

    printf("문장의 원본 : \"%s\"\n", string);

    erase_blank(string, compressed);

    printf("공백이 제거된 텍스트 : \"%s\"\n", compressed);

    return 0;
}
*/

/*
// 4번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int vowel(char ch) {
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;

        default:
            return -1;
    }
}

void delete_vowel(char* original, char* modified) {
    int i = 0;

    while (original[i] != 0) {
        if (vowel(original[i]) == 1) {
            modified[i] = 32;
        }

        else {
            modified[i] = original[i];
        }
        i++;
    }
}

int main(void) {
    char string[SIZE] = "";
    char done[SIZE] = "";

    printf("텍스트를 입력하시오 : ");
    gets_s(string, sizeof(string));
    printf("\n");

    delete_vowel(string, done);
    printf("최종 텍스트 : %s\n", done);

    return 0;
}
*/


/*
// 5번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int valid(char* pass) {
    int i = 0;
    int cap, low, num;
    cap = low = num = 0;

    while (pass[i] != 0) {
        if ('0' <= pass[i] && pass[i] <= '9') {
            ++num;
        }

        else if ('A' <= pass[i] && pass[i] <= 'Z') {
            ++cap;
        }

        else if ('a' <= pass[i] && pass[i] <= 'z') {
            ++low;
        }

        ++i;
    }

    if (cap == 0 || low == 0 || num == 0) {
        return -1;
    }

    else {
        return 1;
    }
}

int main(void) {
    char string[SIZE] = "";

    while(1) {
        printf("암호를 생성하시오 : ");
        gets_s(string, sizeof(string));

        if (valid(string) == 1) {
            printf("적절한 암호입니다.\n");
            break;
        }

        else {
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
        }
    }

    return 0;
}
*/

/*
// 6번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

void correct(char* original, char* modified) {

    modified[0] = toupper(original[0]);

    int i = 1;
    while (original[i] != 0) {
        modified[i] = original[i];
        ++i;
    }

    if (original[--i] != '.') {
        modified[++i] = '.';
        modified[++i] = 0;
    }
}

int main(void) {
    char string[SIZE] = "";
    char done[SIZE] = "";

    printf("텍스트를 입력하시오 : ");
    gets_s(string, sizeof(string));

    correct(string, done);

    printf("결과 텍스트 출력 : %s\n", done);

    return 0;
}
*/

/*
// 7번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

void trim_right(char s[]) {

    const length = strlen(s);
    printf("원본 문자열의 길이 : %d\n", length);
    printf("\n");

    int i = strlen(s);
    if (s[i - 1] == 32) {
        printf("> 오른쪽 공백이 있습니다.\n");

        while (s[i - 1] == 32) {
            s[i - 1] = 0;
            i--;
        }

        printf("> 오른쪽 공백의 개수 : %d\n", length - i);
        printf("\n");
    }

    else {
        printf("> 공백이 없습니다.\n");
        printf("\n");
    }
}

int main(void) {
    char string[SIZE] = "";

    printf("문장을 입력하시오 : ");
    gets_s(string, sizeof(string));
    printf("\n");

    printf("원본 문자열 : \"%s\"\n", string);
    trim_right(string);
    printf("오른쪽 공백이 지워진 결과 : \"%s\"\n", string);

    return 0;
}
*/

/*
// 8번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

void trim_left(char s[]) {

    const length = strlen(s);
    printf("원본 문자열의 길이 : %d\n", length);
    printf("\n");

    int i = 0;
    int j = 0;

    if (s[0] == 32) {
        printf("> 왼쪽 공백이 있습니다.\n");

        while (s[i] == 32) {
            i++;
        }

        printf("> 왼쪽 공백의 개수 : %d개\n", i);
        printf("\n");

        do {
            s[j] = s[i + j];
        } while (s[i + j++] != 0);
    }

    else {
        printf("> 왼쪽 공백이 없습니다.\n");
        printf("\n");
    }

}

int main(void) {
    char string[SIZE] = "";

    printf("문장을 입력하시오 : ");
    gets_s(string, sizeof(string));
    printf("\n");

    printf("원본 문자열 : \"%s\"\n", string);

    trim_left(string);

    printf("왼쪽 공백이 지워진 결과 : \"%s\"\n", string);

    return 0;
}
*/

/*
// 9번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

void capitalize(char s[]) {
    s[0] = toupper(s[0]);
}

int main(void) {
    char string[SIZE] = "";

    printf("문장을 입력하시오 : ");
    gets_s(string, sizeof(string));

    capitalize(string);

    printf("교정된 문장 : %s\n", string);

    return 0;
}
*/

/*
// 10번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int check_palindrome(char* string) {
    int a = strlen(string);
    int k = 0;
    int i;

    for (i = 0; i < a/2; ++i) {
        if (string[i] != string[a - i - 1]) {
            return -1;
        }
        else {
            ++k;
        }
    }

    if (k == a/2) {
        return 1;
    }       
}

int main(void) {
    char string[SIZE] = "";

    printf("문자열을 입력하시오 : ");
    gets_s(string, sizeof(string));

    if (check_palindrome(string) == 1) {
        printf("%s는 회문입니다.\n", string);
    }

    else {
        printf("%s는 회문이 아닙니다.\n", string);
    }

    return 0;
}
*/

/*
// 11번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50
#define NUM 5

int main(void) {
    char name[SIZE] = "";
    char namearr[SIZE][NUM] = { "",  };

    char buf[SIZE] = "";
    char number[SIZE] = "";
    int i;

    char (*ptr)[NUM] = namearr;

    printf("파일명을 입력하시오 : ");
    gets_s(name, sizeof(name));

    for (i = 0; i < NUM; i++) {

        strcpy(buf, name);
        _itoa(i, number, 10);
        strcat(buf, number);
        strcat(buf, ".png");
        strcpy(ptr[i], buf);

        printf("%s ", ptr[i]);
    }
    printf("\n");

    return 0;
}
*/


/*
// 12번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 50

int main(void) {
    char cmpbuf[SIZE] = "";
    char buf[SIZE] = "";
    char name[SIZE] = "";
    char input[SIZE] = "";

    int cs, p, i;

    srand(time(NULL));

    char* a = "안녕하세요.";
    char* b = "좀 더 말해주세요.";
    char* c = "계속하세요. 저는 듣고있어요.";
    char* d = "라니 정말 흥미롭네요.";
    char* e = "오늘 기분이 어떠신가요?";

    printf("안녕하세요. 저는 ELIZA라고 합니다.\n");

    i = 0;
    while (1) {
        printf("> ");
        gets_s(input, sizeof(input));

        p = 0; 
        while (p != 1) { 
            cs = rand() % 5;
            switch (cs) {
            case 0: 
                if (i == 0) { 
                    printf("이름이 어떻게 되나요?\n");
                    printf("> ");
                    gets_s(name, sizeof(name));
                    ++i;
                    ++p;
                    strcpy(buf, "그렇군요!");
                }

                else { 
                    strcpy(cmpbuf, e);
                    strcat(cmpbuf, name);
                    if (strcmp(buf, cmpbuf) != 0) {
                        strcpy(buf, cmpbuf);
                        ++p;
                    }
                }
                break;

            case 1: 
                if (strcmp(buf, a) != 0) {
                    strcpy(buf, a);
                    ++p;
                }
                break;

            case 2: 
                if (strcmp(buf, b) != 0) {
                    strcpy(buf, b);
                    ++p;
                }
                break;

            case 3: 
                if (strcmp(buf, c) != 0) {
                    strcpy(buf, c);
                    ++p;
                }
                break;

            case 4: 
                strcpy(buf, input);
                strcat(buf, d);
                ++p;
                break;            
            }
        }

        printf("%s\n", buf);
    }

    return 0;
}
*/