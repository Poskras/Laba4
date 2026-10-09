
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    int last;
    int first;
    int sum;
    int reverse;

    printf("Введите целое трехзначное число: ");
    scanf("%d", &n);

    //а последняя цифра числа
    last = n % 10;

    //б первая цифра числа
    first = n / 100;

    //в сумма цифр числа
    sum = first + (n / 10) % 10 + last;

    //запись числа наоборот
    reverse = last * 100 + (n / 10) % 10 * 10 + first;

    printf("Последняя цифра = %d, первая цифра = %d, сумма цифр = %d, число наоборот = %d\n",
        last, first, sum, reverse);

    return 0;
}
