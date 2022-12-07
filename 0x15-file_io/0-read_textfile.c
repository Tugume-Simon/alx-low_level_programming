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
	int fildes;
	char *buff;
	ssize_t file_read;
	ssize_t file_write;

	if (filename == NULL)
	{
		return (0);
	}
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
	{
		return (0);
	}
	if (letters > 0)
	{
		buff = malloc(sizeof(char) * letters);
		if (!buff)
			return (0);
		file_read = read(fildes, buff, letters);
		file_write = write(1, buff, file_read);

		if (file_write == -1)
		{
			return (0);
		}
		if (file_write != file_read)
			file_write = write(2, buff, file_read);
	}
	else
		return (0);

	free(buff);
	close(fildes);
	return (file_write);
}
