#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguement it receives
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i< argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
