#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int i, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	grd = malloc(sizeof(int *) * height);

	if (grd == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grd[i] = malloc(sizeof(int) * width);

		if (grd[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grd[i]);

			free(grd);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (p = 0; p < width; p++)
			grd[i][p] = 0;
	}

	return (grd);
}
