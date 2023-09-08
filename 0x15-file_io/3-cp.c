#include "main.h"
#define BUFFSIZE 1024
/**
 * main - entry point, function to copy from argv[1] to [2]
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	int fd1, fd2;
	char buffer[BUFFSIZE];
	ssize_t read_bytes, written_bytes;

	if (argc > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP
			| S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((read_bytes = read(fd1, buffer, BUFFSIZE)) > 0)
	{
		written_bytes = write(fd2, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file '%s'\n", file_from);
		exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
