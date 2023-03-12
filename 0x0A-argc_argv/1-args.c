#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguementspassed to the program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
