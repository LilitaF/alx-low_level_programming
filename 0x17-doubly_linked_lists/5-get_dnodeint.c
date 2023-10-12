#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 * Return: returns the nth node of a dlistint_t linked list
 * if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		if (counter == index)
			return (curr);
		counter++;
		curr = curr->next;
	}
	return (NULL);
}
