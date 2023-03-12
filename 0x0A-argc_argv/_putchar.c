#include "main.h"
#include <stdio.h>

/**
 * _putchar - print char to stdout
 * @c: the character to print
 * Return : Of success 1
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
