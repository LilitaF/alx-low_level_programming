#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: pointer to a pointer that points to list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next_node;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next_node;
	}

	*head = rev;
	return (rev);
}
