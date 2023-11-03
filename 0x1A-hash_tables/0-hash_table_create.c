#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: a pointer to the newly created hash table or
 * If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*hash table creation*/
	hash_table_t *ht;
	unsigned long int a;

	/*if memory fails*/
	ht = malloc(sizeof(hash_table_t));

	if (!ht)
	{
		return (NULL);
	}

	ht->size = size;
	/*initialise array and allocate memory*/

	ht->array = malloc(sizeof(hash_table_t *) * size);

	/*if memory fails*/
	if (!ht->array)
		return (NULL);

	/*initialise elements of array to NULL*/
	for (a = 0; a < size; a++)
	{
		ht->array[a] = NULL;
	}

	return (ht);
}
