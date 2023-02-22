#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int count, bool1, bool2;
	long int x, y, fsum, fsum2, x1, y2;

	x = 1;
	y = 2;
	bool1 =  bool2 = 1;
	printf("%ld, %ld", x, y);
	for (count = 0; count < 96; count++)
	{
		if (bool1)
		{
			fsum = x + y;
			printf(", %ld", fsum);
			x = y;
			y = fsum;
		}
		else
		{
			if (bool2)
			{
				x1 = x % 1000000000;
				y2 = y % 1000000000;
				x = x / 1000000000;
				y = y / 1000000000;
				bool2 = 0;
			}
			fsum2 = (x1 + y2);
			fsum = x + y + (fsum2 / 1000000000);
			printf(", %ld", fsum);
			printf("%ld", fsum2 % 1000000000);
			x = y;
			x1 = y2;
			y = fsum;
			y2 = (fsum2 % 1000000000);
		}
		if (((x + y) < 0) && bool1 == 1)
			bool1 = 0;
	}
	printf("\n");
	return (0);
}
