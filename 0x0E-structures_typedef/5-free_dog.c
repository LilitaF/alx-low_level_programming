#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - frees dogs
 * imagine dog picture
 * @d: structure to free
 * Return: has no return
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
