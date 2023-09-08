#include "main.h"
#define BUFFSIZE 1024
/**
 * exit_error - prints error message for main function
 * @code: code to be displayed uppon error
 * @message: message to be printed when exit code appears
 * @arg: argument for which the exit code and message is for
 * Return: has no return
 */
void exit_error(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
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

	if (argc != 3)
	{
		exit_error(97, "Usage: cp file_from file_to\n", "");
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		exit_error(98, "Error: Can't read from file %s\n", file_from);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP
			| S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		exit_error(99, "Error: Can't write to %s\n", file_to);
	}
	while ((read_bytes = read(fd1, buffer, BUFFSIZE)) > 0)
	{
		written_bytes = write(fd2, buffer, read_bytes);
		if (written_bytes != read_bytes)
			exit_error(99, "Error: Can't write to %s\n", file_to);
	}
	if (read_bytes == -1)
		exit_error(98, "Error: Can't read from file %s\n", file_from);
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
