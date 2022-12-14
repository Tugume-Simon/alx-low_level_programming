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
	ssize_t fr;
	ssize_t fw;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		free(buff);
		close(fd);
		return (0);
	}
	fr = read(fd, buff, letters);
	fw = write(STDOUT_FILENO, buff, fr);

	if (fw == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (fw);
}
