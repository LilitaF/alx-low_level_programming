#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: bit
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1
 * if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_mask, index_max;
	int iso;

	index_max = sizeof(unsigned long int) * 8 - 1;

	if (index <= index_max)
	{
		bit_mask = 1UL << index;/* UL=unsigned long*/
		iso = (n & bit_mask) != 0;
		return (iso);
	}
	else
	{
		return (-1);
	}
	return (iso);
}
