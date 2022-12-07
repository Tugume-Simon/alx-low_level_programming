#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies text content of one file to another
 * @argc: number of commandline arguments
 * @argv: commandline arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fdes1, fdes2;
	char buff[1024];
	ssize_t file_read;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdes1 = open(argv[1], O_RDONLY);
	if (fdes1 == -1)
	{
		close(fdes1);
		dprintf(2, "Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdes2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fdes2 == -1)
	{
		close(fdes2);
		dprintf(2, "Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((file_read = read(fdes1, buff, sizeof(buff))))
	{
		if (!write(fdes2, buff, file_read))
		{
			close(fdes1);
			close(fdes2);
			dprintf(2, "Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fdes2) == -1)
	{
		dprintf(2, "Can't close fd %d\n", fdes2);
		exit(100);
	}
	if (close(fdes1) == -1)
	{
		dprintf(2, "Can't close fd %d\n", fdes1);
		exit(100);
	}
	return (0);
}
