
/*
#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 69;
    float f = 12.3;

    printf("i의 주소: %u\n", &i); // 변수 i의 주소 출력
    printf("c의 주소: %u\n", &c); // 변수 c의 주소 출력
    printf("f의 주소: %u\n", &f); // 변수 f의 주소 출력

    return 0;
}
*/

/*
#include <stdio.h>
int main(void) {
    int number = 10;
    int *p;

    p = &number;

    printf("변수 number의 주소 = %p\n", &number);
    printf("포인터의 값 = %p\n", p);
    printf("변수 number의 값 = %d\n", number);
    printf("포인터가 가리키는 값 = %d\n", *p);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    int number = 10;
    int* p; //pointer 변수다! 선언

    p = &number;
    printf("변수 number의 값 = %d\n", number);

    *p = 20; //number을 바꾸는 역할을 해준다!
    printf("변수 number의 값 = %d\n", number);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    char *pc;
    int *pi;
    double *pd;

    
    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;


    pc++;
    pi++;
    pd++;

    printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
    printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int number = 10;
    int* p;
    int v = 0;

    p = &number;

    printf("number = %u\n", number);
    printf("변수 number의 주소 = %u\n", &number);
    printf("p = %u\n", p);

    //v = *p++; // *p값을 v에 넣고, p는 증가 (int이므로 +4)
    //v = (*p)++; // *p값을 v에 넣고. *p(=number값)를 ++
    //v = *++p; //p를 증가시키고 (int이므로 +4), 증가된 p가 가리키는 값을 v에 대입
    //v = ++*p; // *p(=number값)를 가져와서, 그 값을 증가해서 v에 대입

    printf("v = %u\n", v);
    printf("p = %u\n", p);
    printf("number = %u\n", number);
    
    return 0;
}
*/

/*
#include <stdio.h>

void modify(int value) {
    value = 99;
}

int main(void) {
    int number = 1;

    modify(number);  
    printf("number = %d\n", number);

    return 0;
}
*/

/*
#include <stdio.h>

void modify(int value) {
    value = 99;
}

void modify_cbr(int* ptr) {
    *ptr = 99;
}

int main(void) {
    int number = 1;

    modify_cbr(&number);
    printf("number = %d\n", number);

    return 0;
}
*/

/*
#include <stdio.h>
void swap(int *px, int *py) {
    int tmp;

    tmp = *px;
    *px = *py; 
    *py = tmp;
}

void swap_cbv(int px, int py) {
    int tmp;

    tmp = px;
    px = py;
    py = tmp;
}

int main(void) {
    int a = 100, b = 200;
    printf("swap() 호출 전 a = %d, b = %d\n", a, b);

    //swap(&a, &b);
    swap_cbv(a, b);

    printf("swap() 호출 후 a = %d, b = %d\n", a, b);

    return 0;
}
*/

/*
#include <stdio.h>

void sub(int* ptr) {
    printf("%d \n", ptr[10]);
}

int main(void) {
    int large_data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

    sub(large_data);

    return 0;
}
*/
