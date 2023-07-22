#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Fizz - replaces multiples of 3
 * Buzz - replaces multiples of 5
 * FizzBuzz - replaces multiples of both
 * Return: always 0
 */
int main(void)
{
	int e;

	for (e = 1; e <= 100; e++)
	{
		if ((e % 3) == 0 && (e % 5) == 0)
			printf("FizzBuzz");
		else if ((e % 5) == 0)
			printf("Buzz");
		else if ((e % 3) == 0)
			printf("Fizz");
		else
			printf("%d", e);
		if (e == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
