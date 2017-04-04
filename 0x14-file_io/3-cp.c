#include "holberton.h"

/**
 * XXXXXXXXXXXXXXXXXX - copies the content of a file to another file
 * @XXXXXXXXX:
 * @XXXXXXXXX:
 * Return: 1 if succesfully appended;
 * 1 if text_content is NULL and file already exists
 * -1 on failure to append
 * -1 if filename is NULL
 */

/* 1. usage: cp file_from file_to */
/* 2. if number of argument isnt the correct one, exit 97 and print 'Usage: cp file_from file_to', followed by new line on the POSIX standard error */
/* 3. if file_to already exists, truncate it */
/* 4. if file_from doesnt exist, or if you cant read it, exit 98 and print 'Error: Can't read from file NAME_OF_THE_FILE', followed by a new line on the POSIX standard error (where NAME_OF_FILE is the first argument passed to the program */
/* 5. if cant create or write to 'file_to' fails, exit 99 and print 'Error: Can't write to NAME_OF_THEFILE' followd by new line on the POSIX stanard error (where NAME_OF_FILE is the 2nd arg passed to prog */
/* 6. if cant close file descriptory, exit 100 and print 'Error: Can't close fd FD_VALUE, followed by new line on the POSIX standard error (where FD_Value is the value of the file descriptor) */
/* 7. If a file with the name of file_to file already exists, don't change persmissions */
/* 8. Otherwise, if file_to doesn't exist, file should have rw-rw-r-- permissions. */
/* 9. must read 1,204 bytes at a time from the file_from to make less system calls. Use a buffer */
/* 10. ALLOWED TO USE dprintf */

void CHANGE_ME(void)
{

}
