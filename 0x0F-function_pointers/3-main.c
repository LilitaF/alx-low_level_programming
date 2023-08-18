#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point, performs simple operations
 * @argv: command line argument vector
 * @argc: command line argument count
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int num1, num2, (*calc)(int, int);
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (*op != '+' && *op != '-' && *op != '/' && *op != '*' && *op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(argv[2]);
	printf("%d\n", calc(num1, num2));
	return (0);
}
