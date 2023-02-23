#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int counter;

	for (counter = 48; counter < 58; counter++)
	{
		_putchar(counter);
	}
	_putchar('\n');
}
