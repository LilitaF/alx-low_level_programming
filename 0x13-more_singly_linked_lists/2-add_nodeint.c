#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer
 * @n: element in list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *int_node_added;

	int_node_added = malloc(sizeof(listint_t));

	if (int_node_added == NULL)
	{
		return (NULL);
	}
	/*values assigned to new node*/
	int_node_added->n = n;
	int_node_added->next = *head;
	/*head pointer updated to point to the new node*/
	*head = int_node_added;

	return (int_node_added);
}
