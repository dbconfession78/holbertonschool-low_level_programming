#include "holberton.h"
#define BUFFER_SIZE 1024

/**
 * main - program entry point
 * @argc: number count passed to program
 * @argv: pogram name, source filename, target filename
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd_val, wr_val;
	char buffer[BUFFER_SIZE];

	wr_val = 1;
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	if (!argv[1])
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (!argv[2])
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd_val = read(fd_from, buffer, BUFFER_SIZE);
	if (rd_val == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	while (rd_val != 0)
	{
		wr_val = write(fd_to, buffer, rd_val);
		if (wr_val == -1 || wr_val != rd_val)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		rd_val = read(fd_from, buffer, BUFFER_SIZE);
		if (rd_val == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	wr_val = close(fd_from);
	if (wr_val == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from), exit(100);
	wr_val = close(fd_to);
	if (wr_val == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
