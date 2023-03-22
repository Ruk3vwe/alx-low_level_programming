#include "main.h"
#include <string.h>
/**
 * _strlen - function to print the length of a string
 *
 * @s: holds the character
 * Return: always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
