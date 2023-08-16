#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: number of elements in array
 * @array: contains integer searched for
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no matchig element is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	while (a < size)
	{
		if ((*cmp)(array[a]))
		{
			return (a);
		}
		a++;
	}
	return (-1);
}
