#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: first part of an array
 * @height: second part of 2 dimensional array
 * Return: pointer to array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **array;

	/*for the entire grid*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*for the height*/
	array = (int **) malloc(height * sizeof(int *));

	if (array == 0)
		return (NULL);

	/*for the width*/
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(width * sizeof(int *));
		if (array[a] == 0)
		{
			for (a = 0; a < height; a++)
			{
				free(array[a]);
			}
			free(array);
			return (NULL);
		}
	}

	/*form the grid*/
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}
