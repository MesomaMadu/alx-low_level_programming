#include "variadic_functions.h"
/**
 * print_strings - prints strings passed to the function separed by separated
 * @separator: A string that is used to seperate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int index;
	va_list strings;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
