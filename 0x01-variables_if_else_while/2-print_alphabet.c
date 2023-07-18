#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if successful otherwise 1 upon error
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
