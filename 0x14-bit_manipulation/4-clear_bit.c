#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: value of a bit
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask, index_max;

	index_max = sizeof(unsigned long int) * 8 - 1;
	if (index <= index_max)
	{
		bit_mask = ~( 1UL << index);
		*n = *n & bit_mask;
		return (1);
	}
	else
	{
		return (-1);
	}
	return (1);
}
