#include "main.h"
void print_integer(int m);

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - A function to priting n
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(int m)
{
	int i = 1;

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
