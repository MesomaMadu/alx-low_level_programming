#include "main.h"

/**
 * strpbrk - function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
char *_strbprk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
}
