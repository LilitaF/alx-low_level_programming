#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: pointer to pointer to the head of the list
 * @index: index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(curr);
		return (1);
	}

	for (i = 0; curr != NULL && i < index; ++i)
	{
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);

	if (curr->prev != NULL)
		curr->prev->next = curr->next;

	if (curr->next != NULL)
		curr->next->prev = curr->prev;

	free(curr);
	return (1);
}
