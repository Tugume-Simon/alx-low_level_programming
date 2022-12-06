#include "main.h"

/**
 * read_textfile - reads file contents and prints
 * to the POSIX standard output
 * @filename: name of file with it's extension
 * @letters: number of letters to print from the
 * file
 *
 * Return: number of letters that were output to
 * standard output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_read;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters + 1);
	bytes_read = read(fd, buff, letters);
	buff[letters + 1] = '\0';

	while (*buff)
	{
		_putchar(*buff);
		buff++;
	}
	close(fd);
	return (bytes_read);
}
