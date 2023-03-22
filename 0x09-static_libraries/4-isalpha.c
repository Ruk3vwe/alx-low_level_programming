#include "main.h"
/**
 * _isalpha - to print alphabet
 *
 * @c: holds the value to be compared with ASCII
 *
 * Return: result
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
