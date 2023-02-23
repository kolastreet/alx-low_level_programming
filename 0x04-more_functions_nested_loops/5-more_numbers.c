#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int loop, loop2;

	for (loop = 0; loop < 10; loop++)
	{
		for (loop2 = 0; loop2 < 15; loop2++)
		{
			if (loop2 >= 10)
				_putchar((loop2 / 10) + 48);
			_putchar((loop2 % 10) + 48);
		}
		_putchar('\n');
	}
}
