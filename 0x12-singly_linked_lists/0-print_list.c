#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes;

	for (num_of_nodes = 0; h; num_of_nodes++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (num_of_nodes);
}
