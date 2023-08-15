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
	int a = 0;
	dog_t *nwd; /*new_dog abbr.*/
	int nlen;
	int olen;

	nwd = malloc(sizeof(dog_t));
	if (nwd == NULL)
	{
		return (NULL);
	}
	/*get length of name*/
	nlen = 0;
	while (name[nlen] != '\0')
	{
		nlen++;
	}
	/*get length of owner*/
	olen = 0;
	while (owner[olen] != '\0')
	{
		olen++;
	}
	/*+1 for NULL terminator*/
	nwd->name = malloc(nlen + 1);
	if (!nwd->name)
	{
		free(nwd);
		return (0);
	}
	/*+1 to include NULL terminator*/
	nwd->owner = malloc(olen + 1);
	if (nwd->owner == NULL)
	{
		free(nwd->name);
		free(nwd);
		return (NULL);
	}
	/*copy the contents of name and owner into the new subs*/
	for (a = 0; a < nlen; a++)
	{
		nwd->name[a] = name[a];
	}
	nwd->name[nlen] = '\0';
	for (a = 0; a < olen; a++)
	{
		nwd->owner[a] = owner[a];
	}
	nwd->owner[olen] = '\0';

	nwd->age = age;

	return (nwd);
}
