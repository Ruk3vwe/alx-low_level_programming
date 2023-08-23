#include "main.h"

/**
 * print_integer - A function to print an integer
 * @m: An input integer
 * Return: Nothing
 */
void print_integer(int m)
{
    int divisor = 1;

    if (m < 0)
    {
        _putchar('-');
        m = -m;
    }

    /* Find the divisor that represents the largest place value */
    while (m / divisor >= 10)
        divisor *= 10;

    /* Print each digit */
    while (divisor > 0)
    {
        _putchar((m / divisor) + '0');
        m %= divisor;
        divisor /= 10;
    }
}

/**
 * _putchar - A custom function to print a character
 * @c: The character to be printed
 * Return: On success, 1. On error, -1
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
