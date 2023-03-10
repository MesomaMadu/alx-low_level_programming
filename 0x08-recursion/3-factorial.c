#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: input
 * Return: 0
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
