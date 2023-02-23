#include "main.h"

/**
 * print_diagonal - prints line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int loop, loop2;

	for (loop = 0; loop < n; loop++)
	{
		for (loop2 = 0; loop2 < i; loop2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (loop < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
