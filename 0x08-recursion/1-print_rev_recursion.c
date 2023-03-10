#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse
 * @s: input
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
