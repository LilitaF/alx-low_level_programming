#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to the list
 * Return: sum of all the data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *sum_list = head;

	if (sum_list == NULL)
	{
		return (0);
	}

	while (sum_list != NULL)
	{
		sum = sum + sum_list->n;
		sum_list = sum_list->next;
	}
	return (sum);
}
