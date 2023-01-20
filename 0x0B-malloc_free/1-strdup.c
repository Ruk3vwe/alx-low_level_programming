#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 *
 * @str: String given as a parameter.
 *
 * Return: If @str = NULL or insufficient memory was available,
 *         return (0), Else return @str2.
 *
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *str2;

	i = 0;

	if (str == 0)
		return (0);

	while (str[i] != '\0')
		i++;

	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == 0)
		return (0);

	else
	{
		for (i = 0; str[i] != '\0'; i++)
			str2[i] = str[i];

		str2[i] = '\0';

		return (str2)
	}
}
