#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line.
 * @n: number of parameter
 * @seperator: seperator betwen two numbers
 * Return: Always 0.
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int index;
	va_list nums;

	va_start(nums, n);


	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(nums);
}
