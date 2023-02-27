#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int counter = 0, loop;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
			break;
		counter++;
	}

	if (counter % 2 == 1)
		loop = counter / 2;
	else
		loop = (counter - 1) / 2;

	for (loop++; loop < counter; loop++)
		_putchar(str[loop]);
	_putchar('\n');
}
