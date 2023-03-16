#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-diensional array of integers
 * @width: array row size
 * @height: array column size
 * Return: returns 2d array
 * if width or height is 0 or negative, return NULL
 * the function should return NULL or failure
 */
int **alloc_grid(int width, int height)
{
	int i, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (; i >= 0; i--)
		free(ptr[i]);

	free(ptr);
	return (NULL);
	}
	return ('\0');
}
