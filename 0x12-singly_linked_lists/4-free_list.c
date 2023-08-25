#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to the first element thus list_t
 * Return: has no return
 */
void free_list(list_t *head)
{
	list_t *curr = head;/*initialised to be used to loop*/
	list_t *next_node; /*used so that we dont lose the next pointer/node*/

	while (curr != NULL)
	{
		next_node = curr->next;/*storing the next pointer*/
		free(curr->str);
		free(curr);
		curr = next_node; /*moving to the next node*/
	}
	/*we need to handle the head pointer to show the list is empty*/
	head = NULL;
}
