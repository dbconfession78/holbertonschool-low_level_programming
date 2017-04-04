#include "holberton.h"

/**
 * create_file - creates a new file
 * @filename: name of file to create
 * @text_content: text written to file
 * Return: 1 if succesfully created file;
 * -1 if can't create or write file
 * -1 if filename is NULL
 */

/* file must have rw-------- permissions */
/* if file exists, truncate it */
/* if filename is NULL, return -1 */
/* if can't create or write file, return -1 */
/* if text content is NULL, create an empty file */
int create_file(const char *filename, char *text_content)
{

}

int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
