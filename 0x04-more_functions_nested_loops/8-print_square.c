#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int loop, l;

	for (loop = 0; loop < size; loop++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar(35);
		}
		if (loop != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
