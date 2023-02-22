#include <stdio.h>

/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, y;

	for (c = 1; c < 1024; c++)
	{
		if ((c % 3) == 0 || (c % 5) == 0)
			y = y + c;
	}
	printf("%d\n", y);
	return (0);
}
