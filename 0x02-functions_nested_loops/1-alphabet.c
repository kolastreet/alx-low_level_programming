#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int loop_i;

	for (loop_i = 97; loop_i <= 122; loop_i++)
	{
		_putchar(loop_i);
	}
	_putchar('\n');
}
