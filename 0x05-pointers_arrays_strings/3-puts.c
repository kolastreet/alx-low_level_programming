#include "main.h"

/**
 * _puts - prints a message followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int loop = 0;

	while (loop >= 0)
	{
		if (str[loop] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[loop]);
		loop++;
	}
}
