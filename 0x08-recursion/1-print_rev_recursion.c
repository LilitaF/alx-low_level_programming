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
	 * NULL is at the beginning this time so as long as s[a]
	 * has not seen NULL yet print the reverse of the string
	 * otherwise return nothing
	 */

	if (s[a] != '\0')
	{
		_print_rev_recursion(s + (a + 1));
		_putchar(s[a]);
	}
	else
	{
		return;
	}
}
