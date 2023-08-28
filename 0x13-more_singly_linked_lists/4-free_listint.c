#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list
 * Return: has no return
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head; /*used for loop*/
	listint_t *next_node; /*used to not lose the next pointer/node*/

	while (curr != NULL)
	{
		next_node = curr->next; /*storing */
		free(curr);
		curr = next_node; /*moving to the next node*/
	}
}
