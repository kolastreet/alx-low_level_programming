#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int l1, l2, l3, l4;

	for (l1 = 48; l1 <= 50; l1++)
	{
		for (l2 = 48; l2 <= 57; l2++)
		{
			for (l3 = 48; l3 <= 53; l3++)
			{
				for (l4 = 48; l4 <= 57; l4++)
				{
					if (l1 >= 50 && l2 >= 52)
						break;
					_putchar(l1);
					_putchar(l2);
					_putchar(':');
					_putchar(l3);
					_putchar(l4);
					_putchar('\n');
				}
			}
		}
	}
}
