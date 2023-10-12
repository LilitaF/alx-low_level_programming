#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: pointer to the pointer that points to the head
 * of the list
 * @n: new node to added at the end
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *temp;

	end_node = malloc(sizeof(dlistint_t));

	/*check if memory allocation was successful*/
	if (end_node == NULL)
		return (NULL);

	/*set data and pointer for the end of the node*/
	end_node->n = n;
	end_node->next = NULL;

	/*if list is empty, set end_node as head*/
	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}

	/*traverse the list to find the last node*/
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/*Update pointer to insert the new node at the end*/
	temp->next = end_node;
	end_node->prev = temp;

	return (end_node);
}
