#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;

	int aux = 0;

	char temp;

	while (*(s + i) != '\0')
	{
		i += 1;
		i -= 1;
	}
	while (aux < i)
	{
		temp = s[i];
		s[i] = s[aux];
		s[aux] = temp;
		aux++;
		i--;
	}
}

