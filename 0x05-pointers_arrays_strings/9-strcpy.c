#include "main.h"

/**
 * _strcpy - function that copies the string
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + 1) = *(src + 1);
	}
	*(dest + 1) = '\0';
	return (dest);
}
