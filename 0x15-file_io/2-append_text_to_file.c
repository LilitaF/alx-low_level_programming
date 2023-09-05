#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string
 * to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_return, len = 0;

	if (filename == NULL)
		return (-1);/*no vaild filename*/
	if (text_content == NULL)
		return (1);/*nothing to append*/
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1); /*Error*/
	while (text_content[len])
		len++;
	write_return = write(fd, text_content, len);

	if (write_return == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
