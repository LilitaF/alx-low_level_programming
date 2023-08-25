#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first node
 * @str: string to be malloc'd and duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_node;
	int len = 0;
	list_t *curr;

	while (str[len]) /*to calculate length*/
	{
		len++;
	}

	new_end_node = malloc(sizeof(list_t));
	/*if node has failed*/
	if (new_end_node == NULL)
	{
		return (NULL);
	}

	new_end_node->str = strdup(str);
	/*if duplication has failed*/
	if (new_end_node->str == NULL)
	{
		free(new_end_node);
		return (NULL);
	}

	new_end_node->len = len;
	new_end_node->next = NULL;
	if (*head == NULL)
	{ /*if empty the new end node becomes the head*/
		*head = new_end_node;
		return (new_end_node);
	}

	/*loop through the list to the end if the list*/
	curr = *head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	} /*next we place the new node at the end*/
	curr->next = new_end_node;

	return (new_end_node);
}
