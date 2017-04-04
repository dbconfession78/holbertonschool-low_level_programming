#include "holberton.h"
#define BUFFER_SIZE 1024

/**
 * read_error - handles program exit when unable to read source file
 * @src_filename: file unable to be read from
 * Return: void
 */
void read_error(char *src_filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
	exit(98);
}

/**
 * write_error - handles program exit when unable to target file
 * @target_filename: name of file unable to be written to
 * Return: void
 */
void write_error(char *target_filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}

/**
 * fd_close_error - handles program exit when unable to close fd
 * @fd: fd value that wont close
 * Return: void
 */
void fd_close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
}

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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (!argv[1])
		read_error(argv[1]);
	if (!argv[2])
		write_error(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd_val = read(fd_from, buffer, BUFFER_SIZE);
	if (rd_val == -1)
		read_error(argv[1]);
	while (rd_val != 0)
	{
		wr_val = write(fd_to, buffer, rd_val);
		if (wr_val == -1 || wr_val != rd_val)
			write_error(argv[2]);
		rd_val = read(fd_from, buffer, BUFFER_SIZE);
		if (rd_val == -1)
			read_error(argv[1]);
	}
	wr_val = close(fd_from);
	if (wr_val == -1)
		fd_close_error(fd_from);
	wr_val = close(fd_to);
	if (wr_val == -1)
		fd_close_error(fd_to);
	return (0);
}
