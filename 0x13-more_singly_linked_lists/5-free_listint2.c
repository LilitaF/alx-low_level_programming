#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to a pointer to a head
 * Return: has no return
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *next_node;

	while (curr != NULL)
	{
		next_node = curr->next;
		free(curr);
		curr = next_node;
	}
	*head = NULL;
}
