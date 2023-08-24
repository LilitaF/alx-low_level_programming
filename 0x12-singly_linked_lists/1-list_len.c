#include "lists.h"
/**
 * list_len - length of list_t
 * @h: pointer to linked list_t
 * Return: num_of_elements
 */
size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;

	while (h)
	{
		/*loop will execute constanly until NULL is reached*/
		num_of_elements++;
		h = h->next;
	}
	return (num_of_elements);
}

