#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: pointer to a node
 * Return: number of elements in the linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements = 0;

	while (h != NULL)
	{
		num_of_elements++;
		h = h->next;
	}

	return (num_of_elements);
}
