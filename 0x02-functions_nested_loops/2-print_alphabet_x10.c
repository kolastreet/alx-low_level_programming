#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times followed by new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int loop1, loop2;

	for (loop1 = 0; loop1 <= 9; loop1++)
	{
		for (loop2 = 97; loop2 <= 122; loop2++)
		{
			_putchar(loop2);
		}
	_putchar('\n');
	}
}
