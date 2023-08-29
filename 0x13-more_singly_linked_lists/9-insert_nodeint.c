#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position.
 * @head: pointer to a pointer
 * @idx: ndex of the list where the new node should be added.
 * Index starts at 0.
 * @n: data of the list
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *curr = *head;
	listint_t *insert_node;

	if (head == NULL)
	{
		return (NULL);
	}

	insert_node = malloc(sizeof(listint_t));

	if (insert_node == NULL)
	{
		return (NULL);
	}

	insert_node->n = n;

	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}

	while (a < idx - 1)
	{
		curr = curr->next;
		a++;
	}
	insert_node->next = curr->next;
	curr->next = insert_node;

	return (insert_node);
}
