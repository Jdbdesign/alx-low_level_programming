#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **sin;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	sin = malloc(sizeof(int *) * height);

	if (sin == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		sin[a] = malloc(sizeof(int) * width);

		if (sin[a] == NULL)
		{
			for (; a >= 0; a--)
				free(sin[a]);

			free(sin);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			sin[a][b] = 0;
	}

	return (sin);
}
