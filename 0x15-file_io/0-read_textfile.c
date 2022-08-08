#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters it should read and print.
 *
 * Return: actual number of letters it could read and print or
 *         0 if filename is NULL, file cannot be opened or read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, output;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	output = write(STDOUT_FILENO, buffer, rd);

	if (fd == -1 || rd == -1 || output == -1 || output != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (output);
}
