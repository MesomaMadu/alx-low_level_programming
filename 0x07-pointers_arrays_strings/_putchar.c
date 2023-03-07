#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the charactet so stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and the errno os set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
