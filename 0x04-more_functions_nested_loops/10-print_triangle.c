#include "main.h"

/**
 * print_triangle - prints a triangle shape.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int l1, l2;

	for (l1 = 0; l1 < size; l1++)
	{
		for (l2 = 1; l2 < (size - l1); l2++)
			_putchar(' ');
		for (l2--; l2 < size; l2++)
			_putchar(35);
		if (l1 < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
