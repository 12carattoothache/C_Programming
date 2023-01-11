/*
//01
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

double f(double x, double y) {
    return 1.5 * x + 3.0 * y;
}

int main(void) {
    double x, y;

    x = 1.; y = 2.;
    printf("x = %.6lf,  y = %.6lf,  f(x,y) = %.6lf\n", x, y, f(x,y));

    x = 2.; y = 0.;
    printf("x = %.6lf,  y = %.6lf,  f(x,y) = %.6lf\n", x, y, f(x,y));

    x = 2.; y = 1.;
    printf("x = %.6lf,  y = %.6lf,  f(x,y) = %.6lf\n", x, y, f(x,y));

    return 0;
}
*/


/*
//02
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

double get_bigger(double x, double y) {
    double bigger;
    bigger = x;

    if (bigger < y) {
        bigger = y;
    }

    return bigger;
}

int main(void) {
    double a, b;

    printf("실수를 입력하시오: ");
    scanf("%lf", &a);
    printf("실수를 입력하시오: ");
    scanf("%lf", &b);

    printf("더 큰 수는 %.6lf입니다.\n", get_bigger(a, b));

    return 0;
}
*/


/*
//03
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void draw_stars(void) {
    printf("**********************\n");
}

int main(void) {

    draw_stars();
    printf("Hello World!\n");
    draw_stars();

    return 0;
}
*/


/*
//04
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void get_divisor(int a) {

    printf("%d의 약수: ", a);

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void) {
    get_divisor(8);
    return 0;
}
*/

/*
//05
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int check_prime(int n) {
    int is_prime = 1;

    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    return is_prime;
}

int main(void) {
    double a, b;
    int i;

    for (i = 2; i < 100; i++) {
        if (check_prime(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
*/


/*
//06
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int power(int x, int y) {
    int result = 1;

    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main(void) {
    for(int i = 0; i <= 10; i++) {
        printf("%d ", power(3, i));
    }

    printf("\n");
    return 0;
}
*/


/*
//07
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

double dist_2d(double x1, double y1, double x2, double y2) {
    double distance;
    distance = sqrt( pow((x1 - x2), 2) + pow((y1 - y2), 2) );
    return distance; 
}

int main(void) {
    double x1, y1, x2, y2;

    printf("첫 번째 점의 좌표를 입력하시오 (x, y): ");
    scanf("%lf %lf", &x1, &y1);

    printf("두 번째 좌표를 입력하시오 (x, y): ");
    scanf("%lf %lf", &x2, &y2);

    printf("두 점 사이의 거리는 %lf입니다.\n", dist_2d(x1, y1, x2, y2));

    return 0;
}
*/


/*
//08
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <math.h>

void quad_eqn(double a, double b, double c) {
    double d, root1, root2;
    d = b*b - 4*a*c;
    if (d < 0) {
        printf("근이 없습니다!\n");
    }
    else {
        root1 = -b + sqrt(b*b - 4*a*c);
        root1 /= (2*a);

        root2 = -b - sqrt(b*b - 4*a*c);
        root2 /= (2 * a);

        printf("첫 번째 근 = %.6lf\n", root1);
        printf("두 번째 근 = %.6lf\n", root2);
    }
}

int main(void) {
    double a, b, c;

    printf("2차 방적식의 계수를 입력하시오: \n");

    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);

    quad_eqn(a, b, c);

    return 0;
}
*/


/*
//09
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int coin(void) {
    return (rand() % 2); // 짝수면 0(앞면), 홀수면 1(뒷면)이 생성됨.
}

int main(void) {
    int a;
    srand(time(NULL));

    while (1) {
        printf("앞(0)또는 뒤(1)를 석택하시오.(종료는 -1): ");
        scanf("%d", &a);

        if (a == -1) {
            break;
        }

        else if (a != -1 && a != 0 && a != 1) {
            printf("0, 1, -1 중 하나의 숫자를 입력하세요\n");
        }

        else {
            if (a == coin()) {
                printf("사용자 승리\n");
            }

            else {
                printf("컴퓨터 승리\n");
            }
        }
    }
    return 0;
}
*/


/*
//10
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <time.h>
# include <stdlib.h>


int roll_dice(void) {
    return (rand() % 6) + 1;
}

int main(void) {
    int a = 0, b = 0;
    int c, i;
    srand(time(NULL));


    printf("사용자 주사위 = (");
    for (i = 0; i < 3; i++) {
        c = roll_dice();
        printf("%d, ", c);
        a += c;
    }
    printf("\b\b) = %d\n", a);


    printf("컴퓨터 주사위 = (");
    for (i = 0; i < 3; i++) {
        c = roll_dice();
        printf("%d, ", c);
        b += c;
    }
    printf("\b\b) = %d\n", b);


    if (a > b) {
        printf("사용자 승리\n");
    }

    else if (a < b) {
        printf("컴퓨터 승리\n");
    }

    else {
        printf("동점입니다.\n");
    }

    return 0;
}
*/


/*
// 11
// (a) 정적 지역 변수 사용

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


double plus(double a, double b) {
    static int plus_count = 0;
    plus_count++;
    printf("덧셈은 총 %d번 호출되었습니다\n", plus_count);
    return (a + b);
}

double minus(double a, double b) {
    static int minus_count = 0;
    minus_count++;
    printf("뺄셈은 총 %d번 호출되었습니다\n", minus_count);
    return (a - b);
}

double multiply(double a, double b) {
    static int multiply_count = 0;
    multiply_count++;
    printf("곱셈은 총 %d번 호출되었습니다\n", multiply_count);
    return (a * b);
}

double devide(double a, double b) {
    static int devide_count = 0;
    devide_count++;
    printf("나눗셈은 총 %d번 호출되었습니다\n", devide_count );
    return (a / b);
}

int main(void) {
    char c;
    double x, y;

    while(1) {
        printf("연산을 입력하시오(종료는 Ctrl-Z): ");
        scanf("%lf %c %lf", &x, &c, &y);

        switch(c) {
            case '+':
                printf("연산 결과: %.0lf\n", plus(x,y));
                break;

            case '-':
                printf("연산 결과: %.0lf\n", minus(x,y));
                break;

            case '*':
                printf("연산 결과: %.0lf\n", multiply(x,y));
                break;

            case '/':
                printf("연산 결과: %.0lf\n", devide(x,y));
                break;
        }
    }

    return 0;
}
*/


/*
//11
//(b) 전역 변수 사용

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int plus_count = 0;
int minus_count = 0;
int multiply_count = 0;
int devide_count = 0;

double plus(double a, double b) {
    plus_count++;
    printf("덧셈은 총 %d번 호출되었습니다\n", plus_count);
    return (a + b);
}

double minus(double a, double b) {
    minus_count++;
    printf("뺄셈은 총 %d번 호출되었습니다\n", minus_count);
    return (a - b);
}

double multiply(double a, double b) {
    multiply_count++;
    printf("곱셈은 총 %d번 호출되었습니다\n", multiply_count);
    return (a * b);
}

double devide(double a, double b) {
    devide_count++;
    printf("나눗셈은 총 %d번 호출되었습니다\n", devide_count);
    return (a / b);
}

int main(void) {
    char c;
    double x, y;

    while(1) {
        printf("연산을 입력하시오(종료는 ctrl-Z): ");
        scanf("%lf %c %lf", &x, &c, &y);

        switch(c) {
            case '+':
                printf("연산 결과: %.0lf\n",plus(x,y));
                break;

            case '-':
                printf("연산 결과: %.0lf\n",minus(x,y));
                break;

            case '*':
                printf("연산 결과: %.0lf\n",multiply(x,y));
                break;

            case '/':
                printf("연산 결과: %.0lf\n",devide(x,y));
                break;
        }
    }
    return 0;
}
*/


/*
//12
//(a) 전역 변수 사용

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int total = 0;

void save(int amount) {
    total += amount;
    printf("지금까지의 저축액은 %d원입니다.\n", total);
}

int main(void) {
    int input;

    while(1) {
        printf("얼마를 저축하시겠습니까?(종료는 -1): ");
        scanf("%d", &input);

        if (input == -1) {
            break;
        }

        save(input);
    }

    return 0;
}
*/


/*
//12
//(b) 정적 지역 변수 사용

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void save(int amount) {
    static int total = 0;
    total += amount;
    printf("지금까지의 저축액은 %d원입니다.\n", total);
}

int main(void) {
    int input;

    while(1) {
        printf("얼마를 저축하시겠습니까?(종료는 -1): ");
        scanf("%d", &input);
        if (input == -1) {
            break;
        }

        save(input);
    }

    return 0;
}
*/


/*
//12
//(c) 저축과 인출함수 동시 사용(총 저축액을 전역 변수로 표현)

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int total = 0; // 전역 변수 사용(변수가 두 함수에 모두 사용되므로)

void save(int amount) {
    total += amount;
    printf("지금까지의 저축액은 %d원입니다.\n", total);
}

void draw(int amount) {
    total -= amount;
    printf("지금까지의 저축액은 %d원입니다.\n", total);
}

int main(void) {
    int input;

    while(1) {
        printf("얼마를 저축하시겠습니까?(종료는 -1): ");
        scanf("%ld", &input);

        if (input == -1) {
            break;
        }

        save(input);


        printf("얼마를 출금하시겠습니까?(종료는 -1): ");
        scanf("%ld", &input);

        if (input == -1) {
            break;
        }

        draw(input);
    }

    return 0;
}
*/



//13
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void show_digit(int x) {
    int a, b;

    a = x / 10;
    b = x % 10;

    if (a != 0) {
        show_digit(a);
    }

    printf("%d ", b);
}

int main(void) {
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    show_digit(num);
    printf("\n");

    return 0;
}



/*
//14
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n) {
    long result = 0;

    if (n > 0)
        result = n * n * n + sum(n - 1);

    return result;
}

int main(void) {
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    printf("%d\n", sum(num));

    return 0;
}
*/