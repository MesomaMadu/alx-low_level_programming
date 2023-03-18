#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that makes char to stdout
 * @c: char to be used
 * Return: On success 1.
 * On error -1 is returned, and the errno is set appropriately
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
