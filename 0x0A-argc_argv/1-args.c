#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argv: argument vector, prints command line arguments
 * @argc: argument count, counts command line arguments
 * Return: 0 if successful. 1 upon error
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
