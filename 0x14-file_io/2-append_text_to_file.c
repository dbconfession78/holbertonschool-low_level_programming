#include "holberton.h"

/**
 * append_text_to_file - adds text to the end of an already existing file
 * @filename: name of file to append
 * @text_content: text to append to file
 * Return: 1 if succesfully appended;
 * 1 if text_content is NULL and file already exists
 * -1 on failure to append
 * -1 if filename is NULL
 */

/* don't create file if it doesn't already exist */
/* if text_content is NULL, don't add anything to file. Return */
/* 1 if the file exists and -1 if it doesn't exist or you dont  */
/* have required permissions */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!text_content)
		return (fd == -1 ? -1 : 1);
	if (fd == -1)
		return (-1);
	if (write(fd, text_content, strlen(text_content)) == -1)
		return (-1);
	close(fd);
	return (1);
}
