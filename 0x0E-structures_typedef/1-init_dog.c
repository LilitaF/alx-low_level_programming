#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to be initialised
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog in dog years
 * Return: has no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
