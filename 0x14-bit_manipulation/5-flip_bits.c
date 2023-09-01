#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: number to change from
 * @m: number to change to
 * Return: number of bits needed to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits_to_flip = n ^ m;
	unsigned int counter = 0;

	while (bits_to_flip != 0)
	{/*result of xor_result & 1 will be 1 if the LSB*/
	/*of xor_result is 1 and 0 if it's 0.*/
		if (bits_to_flip & 1)
		{
			counter++;
		}
		bits_to_flip >>= 1; /*right shift to the next bit*/
	}
	return (counter);
}
