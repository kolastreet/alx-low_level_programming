#include "main.h"

/**
 * puts2 - prints one char out of 2.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (counter % 2 == 0)
			_putchar(str[counter]);
		counter++;
	}
}
