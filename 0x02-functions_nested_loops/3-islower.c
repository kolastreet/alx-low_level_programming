#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase . for upper case  shows
 * 0
 *
 * @c: The character in ASCII code
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
