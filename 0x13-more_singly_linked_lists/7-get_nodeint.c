#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the list
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list/
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	listint_t *get_node = head;

	if (!get_node)
	{
		return (NULL);
	}

	while (n < index)
	{
		n++;
		get_node = get_node->next;
	}
	return (get_node);
}
