#include "main.h"
/**
 * create_array - Creates an array of chars,
 *                and initializes it with a specific char.
 *
 * @size: Size of array.
 * @c: Initial character.
 *
 * Return: If @size is less than 0, return (0),
 *         Else, return the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);

	if (size == 0)
		return (0);

	else if (ar == 0)
		return (0);

	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}

		return (ar);
	}
}
