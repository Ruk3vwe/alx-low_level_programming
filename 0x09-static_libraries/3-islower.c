#include "main.h"
/**
 * _islower - entry point to check for lowercase
 * @c: Is the int value to be compared with the ASCII value
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
