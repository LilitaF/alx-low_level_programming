#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer to a pointer
 * @n: elements in the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr;
	listint_t *int_add_node_end;

	int_add_node_end = malloc(sizeof(int));

	if (int_add_node_end == NULL)
	{
		return (NULL);
	}
	int_add_node_end->n = n;
	int_add_node_end->next = NULL;

	if (*head == NULL)
	{/*if pointer points to an empty list*/
		*head = int_add_node_end;
		return (int_add_node_end);
	}
	curr = *head;

	while (curr->next != NULL)
	{/*current pointer should point to what is next */
		curr = curr->next;
	}
	curr->next = int_add_node_end;

	return (int_add_node_end);
}
