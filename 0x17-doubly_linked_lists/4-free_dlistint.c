#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the head of the list
 * Return: has no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while(head)
	{
		/*store current node into temp variable*/
		temp = head;
		/*move head to the next node*/
		head = head->next;
		/*free memory that held by current node*/
		free(temp);
	}
}
