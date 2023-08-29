#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer that points to the head of the
 * linked list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *delete_node;
	int n_data;

	if (*head == NULL)
	{
		return (0);
	}
	delete_node = *head;/*store current node*/
	n_data = delete_node->n; /*storing head data*/
	*head = (*head)->next; /*updating head to next node*/
	free(delete_node);

	return (n_data);
}
