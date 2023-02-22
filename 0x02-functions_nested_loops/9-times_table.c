#include "main.h"

/**
 * times_table - Print  times table
 *
 * Return: no return
 */
void times_table(void)
{
	int x, y, multi;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			multi = x * y;
			_putchar(44);
			_putchar(32);
			if (multi <= 9)
			{
				_putchar(32);
				_putchar(multi + 48);
			}
			else
			{
				_putchar((multi / 10) + 48);
				_putchar((multi % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
