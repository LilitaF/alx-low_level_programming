#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked
 * listint_t list.
 * @h: pointer to the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_elements;

	while (h)
	{
		num_of_elements++;
		h = h->next;
	}
	return (num_of_elements);
}
