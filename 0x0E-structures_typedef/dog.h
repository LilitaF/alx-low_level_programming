#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * struct dog - prints details of each dog
 * @name: name of the dog
 * @age: age of the dog in dog years
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);

#endif
