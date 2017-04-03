#include "holberton.h"
#define BUFFER_SIZE 1024


/**
 * read_error - exits program and reports to stderr
 * when unable to read from source file
 * @src_filename: source filename
 * Return: void
 */
void read_error(char *src_filename)
{
	dprintf(2, "Error: Can't read from file %s\n", src_filename);
	exit(98);
}


/**
 * write_error - exits program and reports to stderr
 * when unable to write to target file
 *
 * @tar_filename: target filename
 * Return: void
 */
void write_error(char *tar_filename)
{
	dprintf(2, "Error: Can't write to %s\n", tar_filename);
	exit(99);
}

/**
 * main - program entry point
 * @argc: number count passed to program
 * @argv: pogram name, source filename, target filename
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, input, output;
	char buffer[BUFFER_SIZE];

	output = 1;
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"); exit(97);
	if (!argv[1])
		read_error(argv[1]);
	if (!argv[2])
		write_error(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	input = read(fd_from, buffer, BUFFER_SIZE);
	if (input == -1)
		read_error(argv[1]);
	while (input != 0)
	{
		output = write(fd_to, buffer, input);
		if (output == -1 || output != input)
			write_error(argv[2]);
		input = read(fd_from, buffer, BUFFER_SIZE);
		if (input == -1)
			read_error(argv[1]);
	}
	if (close(fd_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from); exit(100);
	if (close(fd_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to); exit(100);
	return (0);
}
