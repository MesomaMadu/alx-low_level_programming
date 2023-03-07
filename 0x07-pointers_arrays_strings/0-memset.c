#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by a @s with the constant byte
 * @s: a pointer to the memory to be filled with
 * @b: the number of bytes to be filled
 * @n: the character to fill the memory area with
 *description _memset - over there
 *
 * Return: a pointer to be filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
