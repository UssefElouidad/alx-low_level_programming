#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a ponter to a 2 dimensional array.
 * @width: the width of the array.
 * @height: the height of the array.
 * Return: NULl on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)

		{
			for (; i >= 0; i--)
			free(grid[i]);

		   free(grid);
		return (NULL);

		}
	}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)

			grid[i][j] = 0;
		}
	return (grid);
}
