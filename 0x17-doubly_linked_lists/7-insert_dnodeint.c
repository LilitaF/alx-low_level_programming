#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 * @h: pointer to a pointer to the start of the list
 * @idx: is the index of the list where the new
 * node should be added. Index starts at 0
 * @n: data of the node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
		unsigned int idx, int n)
{
	dlistint_t *inserted_node, *temp = *h;
	unsigned int counter = 0;

	inserted_node = malloc(sizeof(dlistint_t));

	if (inserted_node == NULL)
		return (NULL);

	inserted_node->n = n;
	inserted_node->prev = NULL;
	inserted_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			inserted_node->next = *h;
			(*h)->prev = inserted_node;
		}
		*h = inserted_node;
		return (inserted_node);
	}

	while (temp != NULL && counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}

	if (temp == NULL)
	{
		free(inserted_node);
		return (NULL);
	}

	inserted_node->next = temp->next;
	inserted_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = inserted_node;
	temp->next = inserted_node;

	return (inserted_node);
}

