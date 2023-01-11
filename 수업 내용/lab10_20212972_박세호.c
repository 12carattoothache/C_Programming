/*
#include <stdio.h>

int main(void) {
    char str1[6] = "Seoul";
    char str2[3] = { 'i', 's', '\0' };
    char str3[] = "the capital city of Korea.";

    printf("%s %s %s\n", str1, str2, str3);

    return 0;
}
*/


/*
#include <stdio.h>

int main(void) {
    char str[] = "komputer";
    printf("%s\n", str);
    str[0] = 'c'; 
    printf("%s\n", str);

    return 0;
}
*/


/*
#include <stdio.h>

int main(void) {
    char str[] = "A barking dog never bites";
    int i = 0;

    while (str[i] != 0)
        i++;
    printf("문자열 %s의 길이는 %d입니다.\n", str, i);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    int ch;

    ch = getchar();
    putchar(ch); 

    return 0;
}
*/


/*
#include <stdio.h>
#include <conio.h>

int main(void) { 

    int ch;
    ch = _getch(); 
    _putch(ch);

    return 0;
}
*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char name[100];
    char address[100];

    printf("이름이 어떻게 되시나요? : ");
    scanf("%s", name); 

    printf("어디 사시나요? : ");
    scanf("%s", address);

    printf("안녕하세요, %s에 사는 %s씨.\n", address, name);
    return 0;
}
*/


/*
#include <stdio.h>

int main(void) {
    char name[100];
    char address[100];

    printf("이름이 어떻게 되시나요? : ");
    gets_s(name, 99); 

    printf("어디 사시나요? : ");
    gets_s(address, 99);

    printf("안녕하세요, %s에 사는 %s씨.\n", address, name);
    return 0;
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main(void) {
    char s1[80];
    char s2[80];
    int result;

    printf("첫번째 단어를 입력하시오 : ");
    scanf("%s", s1, sizeof(s1));
    printf("두번째 단어를 입력하시오 : ");
    scanf("%s", s2, sizeof(s2));

    result = strcmp(s1, s2);

    if (result < 0)
        printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
    else if (result == 0)
        printf("%s가 %s와 같습니다.\n", s1, s2);
    else
        printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);

    return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "abcdefgh";
    int len = strlen(s);
    printf("문자열 %s의 길이 = %d\n", s, len);

    return 0;
}
*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    char src[] = "Hello";
    char dst[6];
    strcpy(dst, src);
    printf("복사된 문자열 = %s \n", dst);

    return 0;
}
*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[11] = "Hello";
    strcat(s, "World"); 
    printf("%s\n", s);

    return 0;
}
*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char s[] = "100";
    char t[100] = "";
    int i;

    printf("%d \n", atoi("100")); 
    sscanf(s, "%d", &i); 
    sprintf(t, "%d", 100); 

    return 0;
}
*/


/*
#include <stdio.h>

int main(void) {
    char s[] = "HelloWorld";
    char* p = "HelloWorld";

    s[0] = 'h'; 
    //p[0] = 'h';  // 불가능

    printf("포인터가 가리키는 문자열 = %s \n", p);
    p = "Goodbye";  
    printf("포인터가 가리키는 문자열 = %s \n", p);

    return 0;
}
*/


/*
#include <stdio.h>

int main(void) {
    int i;
    char menu[5][10] = {
    "init",
    "open",
    "close",
    "read",
    "write"
    };

    for (i = 0; i < 5; i++)
        printf("%d번째 메뉴 : %s\n", i, menu[i]);

    return 0;
}
*/