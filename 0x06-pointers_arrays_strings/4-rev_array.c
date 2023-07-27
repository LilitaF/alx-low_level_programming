#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements in an array
 * Return: has no return
 */
void reverse_array(int *a, int n)
{
	int i;
	int b = n - 1; /*to remove/account for NULL*/
	int c; /*used a median to help with reversing*/

	for (i = 0; i < b; i++, b--) /*b = string without NULL, i = index*/
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
	}
}
