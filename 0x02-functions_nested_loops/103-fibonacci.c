#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int x, y, fsum, fx;

	x = 1;
	y = 2;
	fsum = fx = 0;
	while (fsum <= 4000000)
	{
		fsum = x + y;
		x = y;
		y = fsum;
		if ((x % 2) == 0)
		{
			fx = fx + x;
		}
	}
	printf("%ld\n", fx);
	return (0);
}
