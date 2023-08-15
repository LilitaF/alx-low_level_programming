#include "dog.h"
/**
 * free_dog - frees dogs
 * imagine dog picture
 * @d: structure to free
 * Return: has no return
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
