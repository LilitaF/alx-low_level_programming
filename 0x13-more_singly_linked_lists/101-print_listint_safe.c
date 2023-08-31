#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to the beginning of the lists
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head;
	const listint_t *low = head;
	size_t counter = 0;

	while (low != NULL && low->next != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);

		if (curr == low)
		{
			printf("-> [%p] %d\n", (void *)curr->next, curr->next->n);
			exit(98);
		}

		curr = curr->next;
		counter++;

		if (low != NULL && low->next != NULL)
		{
			low = low->next->next;
		}
		else
		{
			break;
		}
	}
	return (counter);
}
