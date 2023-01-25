#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *
 * @width: Grid width.
 * @height: Grind height.
 *
 * Return: If width or height is 0 or negative or failure, return NULL,
 *         Else, return the grid.
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	ar = malloc(sizeof(int *) * height);

	if (ar == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);

		if (ar[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(ar[j]);

			free(ar);
			return (0);
		}

		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}
	return (ar);
}
