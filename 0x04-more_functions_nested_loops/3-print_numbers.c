#include "main.h"

/**
 * print_number - prints 0 - 9
 * Return: void
 */

void print_number(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
