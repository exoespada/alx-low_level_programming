#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Otherwise - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, rw;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}

	rw = read(o, buffer, letters);
	if (rw == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

	rw = write(STDOUT_FILENO, buffer, rw);
	if (rw == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

	free(buffer);
	close(o);

	return (rw);
}

