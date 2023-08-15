#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - creates a new dog
 * @age: age of dog in dog years
 * @name: name of the dog
 * @owner: name of the owner of the dog
 * Return: pointer to new_dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a;
	dog_t *nwd; /*new_dog abbr.*/

	nwd = malloc(sizeof(dog_t));
	if (nwd == NULL)
	{
		return (NULL);
	}
	/*get the exact size +1 for NULL terminator*/
	nwd->name = malloc(sizeof(name) + 1);
	if (nwd->name == 0)
	{
		free(nwd);
		return (NULL);
	}
	/*get the exact size of owner includeing NULL terminator*/
	nwd->owner = malloc(sizeof(owner) + 1);
	if (nwd->owner == NULL)
	{
		free(nwd->name);
		free(nwd);
		return (NULL);
	}
	/*copy the contents of name and owner into the new subs*/
	for (a = 0; name[a]; a++)
	{
		nwd->name[a] = name[a];
	}
	for (a = 0; owner[a]; a++)
	{
		nwd->owner[a] = owner[a];
	}
	nwd->name = '\0';
        nwd->age = age;
	nwd->owner = '\0';

	return (nwd);
}
