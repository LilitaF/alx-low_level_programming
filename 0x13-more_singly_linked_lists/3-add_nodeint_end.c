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

	int_add_node_end = malloc(sizeof(listint_t));

	if (int_add_node_end == NULL)
	{
		return (NULL);
	}
	int_add_node_end->n = n;
	int_add_node_end->next = NULL;

	/*if list is empty, update the head*/
	if (*head == NULL)
	{/*if pointer points to an empty list*/
		*head = int_add_node_end;
		return (int_add_node_end);
	}
	/*go through the list to find the last node*/
	curr = *head;

	while (curr->next != NULL)
	{/*current pointer should point to what is next */
		curr = curr->next;
	}
	/*link the new node to the end of the list*/
	curr->next = int_add_node_end;

	return (int_add_node_end);
}
