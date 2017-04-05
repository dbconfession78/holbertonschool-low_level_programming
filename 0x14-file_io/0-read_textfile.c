#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 *@s: character array to count
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
	int i, c;

	i = 0;
	c = -1;
	while (c != 0)
	{
		c = s[i];
		if (c != 0)
		{
			i++;
		}
	}
	return (i);
}

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
	ssize_t buffer_len;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	if (read(fd, buffer, letters) == -1)
	{
		free(buffer);
		return (0);
	}
	write(1, buffer, _strlen(buffer));
	id(close(fd) == -1)
		return (0);
	buffer_len = _strlen(buffer);
	free(buffer);
	return (buffer_len);
}
