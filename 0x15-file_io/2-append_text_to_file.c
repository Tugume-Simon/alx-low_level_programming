#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: On success 1.
 * On failure -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	count = 0;
	if (text_content != NULL)
	{
		while (*(text_content + count))
		{
			count++;
		}
		write(fd, text_content, count);
	}
	close(fd);
	return (1);
}
