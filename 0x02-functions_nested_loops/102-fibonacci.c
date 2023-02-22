#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	long int x, y, fsum;

	x = 1;
	y = 2;
	printf("%ld, %ld", x, y);
	for (count = 0; count < 48; count++)
	{
		fsum = x + y;
		printf(", %ld", fsum);
		x = y;
		y = fsum;
	}
	printf("\n");
	return (0);
}
