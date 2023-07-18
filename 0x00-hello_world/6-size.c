#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 if successful else 1 on error
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %1lld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1f byte(s)\n", sizeof(float));
	return (0);
}
