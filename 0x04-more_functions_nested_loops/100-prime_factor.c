#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int num, f;

	num = 612852475143;
	for (f = 2; f <= num; f++)
	{
		if (num % f == 0)
		{
			num /= f;
			f--;
		}
	}
	printf("%ld\n", f);
	return (0);
}
