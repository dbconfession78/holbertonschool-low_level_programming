#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read and printed
 * @letters: number of letters to read and print
 * Return: number of characters succesfully read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	if (!(read(fd, buffer, letters)))
		return (0);
	dprintf(1, buffer, letters);
	close(fd);
	return (strlen(buffer));

}
