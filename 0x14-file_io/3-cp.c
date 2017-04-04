#include "holberton.h"
#define BUFSIZE 1024

/**
 * main - program entry point
 * @argc: number count passed to program
 * @argv: pogram name, source filename, target filename
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, readval, retval;
	char buf[BUFSIZE];

	retval = 1;
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"),
			exit(97);
	if (!argv[1])
		dprintf(2, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	if (!argv[2])
		dprintf(2, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
				   0664);
	readval = read(file_from, buf, BUFSIZE);
	if (readval == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (readval != 0)
	{
		retval = write(file_to, buf, readval);
		if (retval == -1 || retval != readval)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		readval = read(file_from, buf, BUFSIZE);
		if (readval == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
	}
	retval = close(file_from);
	if (retval == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);
	retval = close(file_to);
	if (retval == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
