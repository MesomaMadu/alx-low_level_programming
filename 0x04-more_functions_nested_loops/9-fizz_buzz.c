#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by
 * but for the multiples of three prints Fizz
 * but for the multiples of five prints Buzz
 * Return: Always 0 (success)
 */

int main(void)
{
		int i;

		for (i = 1; i <= 100; i++)
		{
			if( i % 3 == 0 && i % 5 != 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0 && i % 3 != 0)
			{
				printf("Buzz");
			}
			else if (i % 3 == 0 && i %5 == 0)
			{
				printf("Fizzbuzz");
			}
			else if (i == 1)
			{
				printf("%d", i);
			}
		}
		printf("\n");

		return (0);
}
