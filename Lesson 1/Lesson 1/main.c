// Урок 1
// Завьялов Константин

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
// Задание 10
// Дано целое число N > 0. С помощью операций деления нацело и взятия остатка от деления определить, имеются ли в записи числа N нечётные цифры. Если имеются, то вывести True, если нет – вывести False.

/*
int main() {
    
    int n = 81927;
    
    while (n > 0) {
        if (n % 10 % 2 == 0) {
            n /= 10;
            printf("False\n");
        } else {
            printf("True\n");
            break;
        }
        
    }
}
*/

// Задание 11
// С клавиатуры вводятся числа, пока не будет введён 0. Подсчитать среднее арифметическое всех положительных чётных чисел, оканчивающихся на 8

/*
int main() {
    
    int result;
    int sum = 0;
    int count = 0;
    int num;
    
    scanf("%d", &num);
    while (num != 0) {
        printf("Введите число: ");
        scanf("%d", &num);
        if (num > 0)
            if (num % 10 == 8) {
                sum = sum + num;
                count++;
                result = sum/count;
                printf("Среднее арифметическое = %d\n", result);
            }
    }
}
*/

// Задание 12
// Написать функцию нахождения максимального из трёх чисел

/*
int main() {
    
    int a = 32;
    int b = 67;
    int c = 99;
    int x = 0;
    
    x = a;
    if (x < b) x = b;
    if (x < c) x = c;
    printf("%d\n", x);
}
*/


// Задание 13 *
// Написать функцию, генерирующую случайное число от 1 до 100:
// a. С использованием стандартной функции rand().

/*
int main(void) {
    srand((unsigned int)(time(NULL)));
    printf("%d\n", rand() % 100);
}
*/

//b. Без использования стандартной функции rand().

/*
int main(void) {
    int x, a, b, m, i;
    m = 100;
    b = 3;
    a = 2;
    x = 1;

    for (i = 0; i < m; i++) {
        x += (a * x + b) % m;
        printf("%d \n", x);
    }
}
*/

// Задание 14 *
// Напишите программу, которая получает на вход натуральное число N и выводит на экран все автоморфные числа, не превосходящие N

/*
int main(void) {
    int n = 100;
    int i;
    int count = 10;
    int q;
    int a;
    //int countTwo;
    
    for (i = 1; i <= n; i++) {

        q = i * i;
        a = q % count;
        if (i == a) {
            printf("%d\n", i);
        }
        
//        while (i > 0) {
//            countTwo = i % 10;
//            if (countTwo < 10) {
//                count = 10;
//            } else {
//            count = countTwo * 100;
//            }
//        }
    }
}
*/
