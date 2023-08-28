#include "lists.h"

/**
 * print_listint - prints all the elemets of listint_t list.
 * @h: pointer to the list
 * Return: numebr of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes;

	for (num_of_nodes = 0; h; num_of_nodes++)
	{
		printf("%u\n", h->n);
	}
	h = h->next;
	return (num_of_nodes);
}
