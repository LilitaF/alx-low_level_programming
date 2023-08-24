#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the start of the list_t list
 * @str: str that is meant to malloc'd and duplicated
 * Return: address/pointer to new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;
	int len = 0; /*for the str, to calculate lengt*/

	/*for length*/
	while (str[len])
	{
		len++;
	}

	added_node = malloc(sizeof(list_t));
	if (added_node == NULL)
	{
		return (NULL);
	}

	added_node->str = strdup(str);
	/*if dupilication fails*/
	if (added_node == NULL)
	{
		return (NULL);
	}

	added_node->len = len;
	added_node->next = *head;/*puts new node at the beginnig of list*/
	*head = added_node;

	return (added_node);
}
