#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int loop;

	for (loop = 97; loop <= 122; loop++)
	{
		_putchar(loop);
	}
	_putchar('\n');
}
