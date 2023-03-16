#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to the duplicated string
 * @str: string to be copied
 * Return: pointer to duplicated string, Null if fail
 */
char *_strdup(char *str)
{
	int siz, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	/*determining the length size*/
	for (size = 0; str[size] != '\0'; size++)
		ptr(char *) malloc(size + 1) * sizeof(char);
	if (ptr == NULL)
		return (NULL);
	/*Copying the content of @str into new array*/
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = ('\0');
	return (ptr)
}
