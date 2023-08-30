#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to the beginning of the lists
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head;
	const listint_t *check_loop = head;
	size_t counter = 0;

	while (curr != NULL)
	{
		printf("[%p] %d\n",(void *)curr, curr->n);

		if (curr == check_loop)
		{
			printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);
			exit(98);
		}

		curr = curr->next;
		counter++;
		if (check_loop != NULL && check_loop->next != NULL)
		{
			check_loop = check_loop->next->next;
		}
		else
		{
			break;/*no loop detected*/
		}
	}
	return (counter);
}
