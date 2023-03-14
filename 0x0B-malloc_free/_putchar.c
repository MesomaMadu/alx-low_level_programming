#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: the char to use
 * Return: 0 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
