#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t	read_return;
	int fd; /*file descriptor*/
	char buffer[1024];
	ssize_t written_bytes;
	ssize_t printed_bytes;
	ssize_t read_total = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	while (letters > 0)
	{
		read_return = read(fd, buffer, sizeof(buffer));
		if (read_return == -1)
		{
			close(fd);
			return (0);
		}
		if (read_return == 0)
			break; /*indicates end of file*/

		printed_bytes = (letters < (size_t)read_return) ? (ssize_t)letters : read_return;
		written_bytes = write(STDOUT_FILENO, buffer, printed_bytes);

		if (written_bytes == -1 || written_bytes != printed_bytes)
		{
			close(fd);
			return (0);
		}
		read_total = read_total + printed_bytes;
		letters = letters - printed_bytes;

	}
	close(fd);
	return (read_total);
}
