#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int loop;

	loop = 1;
	printf("%d", loop);
	for (loop = 2; loop <= 100; loop++)
	{
		if ((loop % 3 == 0) && (loop % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (loop % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (loop % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", loop);
		}
	}
	printf("\n");
	return (0);
}
