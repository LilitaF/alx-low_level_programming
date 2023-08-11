#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements of size bytes
 * @size: bytes of nmemb
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int a;

	array = malloc(sizeof(unsigned int) * (nmemb * size));

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (!array)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
	{
		array[a] = 0;
	}
	return (array);
}
