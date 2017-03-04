#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1); /* 1 */
    printf("%d\n", r);
    r = factorial(5); /* 120 */
    printf("%d\n", r);
    r = factorial(10); /* 3628800 */
    printf("%d\n", r);
    r = factorial(-1024); /* -1 */
    printf("%d\n", r);
    return (0);
}
