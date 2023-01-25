#include "main.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 *
 * @ac: Number of arguments.
 * @av: Value of arguments.
 *
 * Return: If "ac == 0" or "av == NULL" or failure, return (0),
 *         Else, return a pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, c;
	char *str;

	c = 0;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c++;

		c++;
	}

	str = malloc(sizeof(char) * (c + 1));

	if (c == 0)
		return (0);

	c = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[c] = av[i][j];
			c++;
		}

		str[c] = '\n';
		c++;
	}
	str[c] = '\0';
	return (str);
}
