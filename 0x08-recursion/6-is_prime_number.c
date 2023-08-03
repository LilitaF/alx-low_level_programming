#include "main.h"
/**
 * used_to_help -  function created to help is_prime_number
 * to test
 * @n: same input integer from is_prime_number
 * @a: the result of n / 2 (the same as the function n / 2
 * passed to i - 1
 * Return: always 0
 */
int used_to_help(int n, int a)
{
       	if (n % a == 0)
	{
		return (0);
	}
	else if (a == 1)
	{
		return (1);
	}
	else
	{
		return (used_to_help(n, a + 1));
	}
	return (0);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input integer
 * Return: always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (used_to_help(n, n / 2) > 0)
	{
		return (1);
	}
	return (0);
}
