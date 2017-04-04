#include "holberton.h"

/**
 * append_text_to_file.c - adds text to the end of an already existing file
 * @filename: name of file to append
 * @text_content: text to append to file
 * Return: 1 if succesfully appended;
 * 1 if text_content is NULL and file already exists
 * -1 on failure to append
 * -1 if filename is NULL
 */

/* don't create file if it doesn't already exist */
/* if text_content is NULL, don't add anything. */
/*Return 1 if the file exists and -1 if it doesn't exist or you dont have required permissions */
int append_text_to_file(const char *filename, char *text_content)
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
