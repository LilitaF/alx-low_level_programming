#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to
 * the file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be
 * written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_return;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1); /*creation failed*/
	while (text_content[len])
		len++;

	if (text_content != NULL)
	{
		write_return = write(fd, text_content, len);
		if (write_return == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
