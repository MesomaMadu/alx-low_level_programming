#include "main.h"

/**
 * _strchr - Enyry point
 * @s: input
 * @c: input
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
