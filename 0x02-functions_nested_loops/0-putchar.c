#include "main.h"

/**
 * main - Prints _putcharfollowed by new line as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int loop, size;

	size = sizeof(str) / sizeof(int);
	for (loop = 0; loop < size ; loop++)
	{
		_putchar(str[loop]);
	}
	_putchar('\n');
	return (0);
}
