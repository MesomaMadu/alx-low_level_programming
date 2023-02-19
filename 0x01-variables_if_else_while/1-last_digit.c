#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int m;

	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("last digit of %d is %d and is 0\n", n, m);
	else if (m < 6 && m != 0)
		printf("last digit of %d is %d is less than 6 and not 0\n", n, m);
	return (0);
}
