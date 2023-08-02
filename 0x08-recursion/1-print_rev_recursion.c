#include "main.h"
/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: string to be printed in reverse
 * Return: has no return
 */
void _print_rev_recursion(char *s)
{
	int a = 0; /*created and given a value cause s is a pointer*/

	/**
	 * NULL is at the beginning this time thus if printing a new
	 * line when NULL is seen, the new line will be printed first
	 * then the string.
	 * to prevent this s[a] should not be equal to NULL
	 * to print a new line after the reversed string
	 */

	if (s[a] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + (a + 1));
		_putchar(s[a]);
	}
}
