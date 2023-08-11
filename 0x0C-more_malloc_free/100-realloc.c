#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call
 * to malloc: malloc(old_size)
 *
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to memory/array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *reall;

	/*changed typecast from void to char for access*/
	char *ptrsub = ptr;

	if (new_size == 0)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		reall = malloc(new_size);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	reall = malloc(new_size);

	if (reall == NULL)
	{
		return (NULL);
	}

	/*reallocation of memory*/
	for  (a = 0; a < old_size; a++)
	{
		reall[a] = ptrsub[a];
	}
	free(ptrsub);
	return (reall);
}
