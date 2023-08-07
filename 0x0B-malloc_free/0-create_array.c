#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: char that the array will  be intiliased by
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int a;/* needs to be unsigned to match unsigned int size*/

	/*always do this step, helps provide accurate space*/
	b = malloc(size * sizeof(char));

	if (size == 0 || b == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		b[a] = c;
	}
	return (b);
}
