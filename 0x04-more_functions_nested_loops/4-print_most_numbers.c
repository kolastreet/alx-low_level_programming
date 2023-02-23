#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int loop;

	for (loop = 48; loop < 58; loop++)
	{
		if (loop != 50 && loop != 52)
			_putchar(loop);
	}
	_putchar('\n');
}
