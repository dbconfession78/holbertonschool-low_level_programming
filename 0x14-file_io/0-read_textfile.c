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
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t buffer_len = 0;

	if (!filename || !buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		/* free(buffer); */
		return (0);
	}

	if (read(fd, buffer, letters) == -1)
	{
		free(buffer);
		return (0);
	}
	buffer_len = write(STDOUT_FILENO, buffer, _strlen(buffer));
	if (buffer_len == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	if (close(fd) == -1)
		return (0);
	return (buffer_len);
}
