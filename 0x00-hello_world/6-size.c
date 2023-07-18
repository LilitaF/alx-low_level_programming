#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 if successful else 1 on error
 */
int main(void)
{
	printf("size of a char: %c byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lli byte(s)\n", sizeof(long long int));
	printf("size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
