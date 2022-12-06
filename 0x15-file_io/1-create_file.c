#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: On success 1.
 * On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t file_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!fd)
		return (-1);

	i = 0;
	while (*(text_content + i))
	{
		i++;
	}

	file_write = write(fd, text_content, i);
	if (file_write == -1)
	{
		return (-1);
	}

	return (1);
}
