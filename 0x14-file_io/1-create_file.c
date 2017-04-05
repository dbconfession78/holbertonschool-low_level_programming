#include "holberton.h"

/**
 * create_file - creates a new file
 *
 * @filename: name of file to create
 * @text_content: text written to file
 *
 * Return: 1 if succesfully created file;
 * -1 if can't create or write file
 * -1 if filename is NULL
 */

/* file must have rw------- permissions */
/* if file exists, truncate it */
/* if filename is NULL, return -1 */
/* if can't create or write file, return -1 */
/* if text content is NULL, create an empty file */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int content_len = strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
		if (write(fd, text_content, content_len) == -1)
			return (-1);
	if (close(fd) == -1)
		return (-1);
	return (1);
}
