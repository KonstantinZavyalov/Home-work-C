//
//  Lesson 2
//  Завьялов Константин

#include "stdio.h"

// Задание 1. Реализовать функцию перевода из 10 системы в двоичную используя рекурсию.

/*
void rec(int n) {

    if (n != 0) {
        if (n % 2 == 0) {
            printf("1");
            rec(n/2);
        }
        if (n % 2 != 0) {
            printf("0");
            rec(n/2);
        }
    }
    printf("\n");
}

int main (int argc, char *argv[]) {

    rec(12);
    return 0;
}
*/

// Задание 2. Реализовать функцию возведения числа a в степень b:
// a. без рекурсии;

/*
int main (void) {
    
    int a = 2;
    int b = 6;
    int n;
    int sum = a;
    
    for (n = 1; n < b; n++) {
        sum *= a;
    }
    printf("%d\n", sum);
}
*/

// b. рекурсивно;

/*
void sumn(int a, int b, int n, int sum) {
    
    if (n < b) {
        sum *= a;
        sumn (a, b, n + 1, sum);
        printf("%d\n", sum);
    }
}

int main(int argc, char *argv[]) {
    
    int a = 2;    // Число
    int b = 6;    // Степень
    int n = 1;
    int sum = a;
    
    sumn(a, b, n, sum);
    
    return 0;
}
*/
