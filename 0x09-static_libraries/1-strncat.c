#include "main.h"
#include <string.h>

/**
 * _strncat - function to append some charx
 * @dest: first parameter
 * @src: second parameter
 * @n: 3rd parameter
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
