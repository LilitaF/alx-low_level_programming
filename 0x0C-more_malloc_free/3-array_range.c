#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min: min values in an array
 * @max: max values in an array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array_range;
	int a;

	if (min > max)
		return (NULL);

	array_range = malloc(sizeof(int) * (max - min + 1));

	if (array_range == NULL)
		return (NULL);

	for (a = 0; a <= (max - min); a++)
	{
		array_range[a] = min + a;
	}
	return (array_range);
}
