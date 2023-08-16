#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: the function will be executed on its elements
 * @size: size of the array
 * @action: pointer to the function used
 * Return: has no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	if (array == NULL || action == NULL)
		return;
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
