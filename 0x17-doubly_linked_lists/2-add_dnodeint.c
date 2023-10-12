#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: pointer to pointer to the head of the list
 * @n: new element
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added_node = malloc(sizeof(dlistint_t));

	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	/*prev pointer of new node is NULL as its first node*/
	added_node->prev = NULL;
	/*next pointer of new node points to current head*/
	added_node->next = *head;

	/*update the prev pointer of current head*/
	if (*head != NULL)
	{
		(*head)->prev = added_node;
	}

	/*update prev pointer to point to the new node*/
	*head = added_node;

	/*return the address of the new element*/
	return (added_node);
}
