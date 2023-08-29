#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 *  index of a listint_t linked list.
 * @head: pointer to a pointer that points
 * to a list
 * @index: is the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *curr = *head;
	listint_t *delete_node_idx = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{/*head is updated to skip first node*/
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	while (n < index && curr != NULL)
	{
		delete_node_idx = curr;
		curr = curr->next;
		n++;
	}
	if (curr == NULL)
	{
		return (-1);
	}
	delete_node_idx->next = curr->next;
	free(curr);
	return (1);
}
