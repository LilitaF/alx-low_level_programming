#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: commond line argument to count arguments
 * passed to it
 * @argv: command line argument used to display the
 * string arguments paased through it
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
