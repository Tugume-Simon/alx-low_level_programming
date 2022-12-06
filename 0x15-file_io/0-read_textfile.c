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
	ssize_t written;

	fd = open(filename, O_RDONLY);
	if (filename == NULL || fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	bytes_read = read(fd, buff, letters);
	if (bytes_read == -1)
		return (0);
	buff[letters + 1] = '\0';
	written = write(1, buff, bytes_read);

	close(fd);
	free(buff);
	if (!written || written != (ssize_t)bytes_read)
		return (0);
	return (written);
}
