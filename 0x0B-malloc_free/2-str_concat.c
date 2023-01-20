#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: First string given as a parameter.
 * @s2: Second string given as a parameter.
 *
 * Return: If failure, return (0),
 *         Else return @s3 (Concatenated strings).
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *s3;

	j = i = 0;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	j += i;

	s3 = malloc(sizeof(char) * (j + 1));

	if (s3 == 0)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (j = 0; s2[j] != '\0'; i++, j++)
		s3[i] = s2[j];

	s3[i] = '\0';

	return (s3);
}
