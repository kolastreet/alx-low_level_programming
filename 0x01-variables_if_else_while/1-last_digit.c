#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check if  greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (mod > 5)
	{
		printf("number is %d and last number is %d and is greater than 5\n", n, mod);
	}
	else if (mod == 0)
	{
		printf("number is %d and last number is 0 ", n);
	}
	else
	{
		printf("number is %d and last number is %d is less than 6 and not 0\n", n, mod);
	}
	return (0);
}
